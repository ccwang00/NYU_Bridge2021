#include <iostream>
using namespace std;

int* getPosNums1(int* arr,int arrSize, int& outPosArrSize);
int* getPosNums2(int* arr,int arrSize,int* outPosArrSizePtr);
void getPosNum3(int* arr,int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);
void printArray(int arr[],int arraySize);

int main() {
    //test cases
    int outPosArrSize;
    int arr1[]={3,-1,-3,0,6,4};
    int arr1Size=6;
    cout<<"Original Array: ";
    printArray(arr1,arr1Size);

    cout<<"First Version: ";
    int* f1=getPosNums1(arr1,arr1Size,outPosArrSize);
    printArray(f1,outPosArrSize);
    delete[] f1;


    cout<<"Original Array: ";
    int arr2[10]={-21,-1,6,7,12,0};
    int arr2Size=6;
    printArray(arr2,arr2Size);
    cout<<"Second Version:";
    int posArraySize=arr2[0];
    int* f2=getPosNums2(arr2,arr2Size,&posArraySize);
    printArray(f2,outPosArrSize);
    delete[] f2;

    cout<<"Original Array: ";
    int arr3[10]={32,16,-4,-1,-12};
    int arr3Size=5;
    printArray(arr3,arr3Size);
    cout<<"Third Version: ";
    int* posNum3= nullptr;
    int newArraySize=0;
    getPosNum3(arr3,arr3Size,posNum3,newArraySize);
    printArray(posNum3,newArraySize);
    delete[] posNum3;

    cout<<"Original Array: ";
    int arr4[10]={29,-6,-4,-1,-12};
    int arr4Size=5;
    printArray(arr4,arr4Size);
    cout<<"Fourth Version: ";
    int* posNum4= nullptr;
    int pos4NewSize=0;
    getPosNums4(arr4,arr4Size,&posNum4,&pos4NewSize);
    printArray(posNum4,pos4NewSize);
    delete[] posNum4;




    return 0;
}

void printArray(int arr[],int arraySize){
    for(int i=0;i<arraySize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


//return the base address of the array and updates the output parameter
int* getPosNums1(int* arr,int arrSize, int& outPosArrSize){
    int countPos=0;
    int* posNum=new int[arrSize];
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            posNum[countPos++]=arr[i];
        }
    }
    outPosArrSize=countPos;
    return posNum;
}

//return the base address of the array and uses the pointer to update the logical size
int* getPosNums2(int* arr,int arrSize,int* outPosArrSizePtr){
    int countPos=0;
    int* posNum=new int[arrSize];
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            posNum[countPos++]=arr[i];
        }
    }
    *outPosArrSizePtr=countPos;
    return posNum;
}

//updates the output parameter with the base address and output parameter logical size
void getPosNum3(int* arr,int arrSize, int*& outPosArr, int& outPosArrSize){
    int countPos=0;
    outPosArr =new int[arrSize];
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            outPosArr[countPos++]=arr[i];
        }
    }
    outPosArrSize=countPos;
}

//use the pointer to update the base address of the array and the pointer to update t
//the  logical size;
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr){
    int countPos=0;
    int* posNum = new int[arrSize];
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            posNum[countPos++]=arr[i];
        }
    }
    *outPosArrSizePtr=countPos;
    *outPosArrPtr=posNum;


}
