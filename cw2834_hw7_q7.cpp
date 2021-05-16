#include <iostream>
#include<vector>
using namespace std;

int* findMissing(int arr[],int n, int& resArrSize);
void printArray(int arr[],int arraySize);
int main() {
    int arr[6]={3,1,3,0,6,4};
    int resArrSize;
    int* f=findMissing(arr,6,resArrSize);
    printArray(f,resArrSize);

    return 0;
}

int* findMissing(int arr[],int n, int& resArrSize){
    //create an array to hold all numbers up to n;
    int* initial=new int[n+1];
    for(int i=0;i<n;i++){
        initial[arr[i]]++;
    }
    int* missing = new int[n];
    int count=0;
    for(int i=0;i<(n+1);i++){
        if(initial[i]==0){
            missing[count++]=i;
        }
    }
    resArrSize=count;
    delete initial;
    return missing;
}

void printArray(int arr[],int arraySize){
    cout<<"[";
    for(int i=0;i<arraySize;i++){
        cout<<arr[i];
        if(i!=arraySize-1)
            cout<<", ";
    }

    cout<<"]";

}
