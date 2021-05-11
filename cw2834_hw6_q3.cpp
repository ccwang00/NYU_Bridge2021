#include <iostream>
using namespace std;

void printArray(int arr[],int arrSize);
void reverseArray(int arr[],int arrSize);
void removeOdd(int arr[],int& arrSize);
void splitParity(int arr[],int arrSize);
int main() {
    int arr1[10]={9,2,14,12,-3};
    int arr1Size=5;

    int arr2[10]={21,12,6,7,14};
    int arr2Size=5;

    int arr3[10]={3,6,4,1,12};
    int arr3Size=5;


    reverseArray(arr1,arr1Size);
    printArray(arr1,arr2Size);

    removeOdd(arr2,arr2Size);


    splitParity(arr3,arr3Size);
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

void reverseArray(int arr[],int arrSize){
    int i;
    int first=0, last=arrSize-1;
    while(first<last){
        i=arr[first];
        arr[first]=arr[last];
        arr[last]=i;
        last--;
        first++;
    }
}

void removeOdd(int arr[],int& arrSize){
    int count=0;
    int i;
    for(i=0;i<arrSize;i++){
        if(arr[i]%2==0) {
            cout << arr[i]<<" ";
            count++;
        }
    }
    cout<<endl;
    arrSize=count;
}

void splitParity(int arr[],int arrSize){
    int i;
    int first=0, last=arrSize-1;
    while(first<last){
        if(arr[first]%2==0) {
            i = arr[first];
            arr[first] = arr[last];
            arr[last] = i;

        }
        last--;
        first++;
    }
}