#include <iostream>
#include<string>
using namespace std;

void oddKeepEvensFlip(int arr[],int arrSize);
void printArray(int arr[],int arrSize);
int main() {

    int arr3[10]={5,2,11,7,6,4};
    int arr3Size=6;
    printArray(arr3,arr3Size);
    oddKeepEvensFlip(arr3,arr3Size);
    printArray(arr3,arr3Size);


    return 0;
}
void printArray(int arr[],int arrSize){
    int i;
    for(i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void oddKeepEvensFlip(int arr[],int arrSize){
    int i;
    int first=0, last=arrSize-1;
    int* temp= new int[arrSize];
    for(i=0;i<arrSize;i++){
       if(arr[i]%2==0){
        temp[last--]=arr[i];
       }
       else {
           temp[first++] = arr[i];
       }
    }

    for(int i=0;i<arrSize;i++){
        arr[i]=temp[i];
    }
    delete []temp;
}
