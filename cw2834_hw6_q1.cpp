#include <iostream>
using namespace std;

int minInArray(int arr[],int arrSize);
void readLocation(int arr[],int arrSize, int value);
int main() {
    int num,min,arr[21],i;
    int arrSize=20;
    cout<<"Please enter 20 integers separated by a space:"<<endl;
    for(i=0;i<20;i++){
        cin>>arr[i];
        min=minInArray(arr,arrSize);
    }
    cout<<"The minimum value is "<<min<<" and it is located in the following indices: ";
    readLocation(arr,arrSize,min);


    return 0;
}

int minInArray(int arr[],int arrSize){
    int min=arr[0];
    for(int i=1;i<arrSize;i++) {
        if(arr[i]<min)
            min=arr[i];
        //min is the smallest of the values arr[0], arr[1], arr[2]... arr[i]
    }
    return min;
}

void readLocation(int arr[],int arrSize, int value){
    for(int i=0;i<arrSize;i++){
        if(value==arr[i])
            cout<<i<<" ";
    }
    cout<<endl;

}