#include <iostream>
using namespace std;

const int REALPIN[5]={1,2,3,4,5};
void printPIN(int arr[10]);
void printRandomNum(int arr[10]);
int translateCode(int arr[10]);
int main() {
    int arr[10];
    int input;
    printPIN(arr);
    printRandomNum(arr);
    cin>>input;
    if(input==translateCode(arr)){
        cout<<"Your PIN is correct."<<endl;
    }
    else
        cout<<"Your PIN is not correct."<<endl;


    return 0;
}

void printPIN(int arr[10]){
    int i;
    cout<<"PIN: ";
    for(i=0;i<10;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

void printRandomNum(int arr[10]){
    int i;
    srand(time(0));
    cout<<"NUM: ";
    for(i=0;i<10;i++){
        arr[i]=(rand()%3)+1;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int translateCode(int arr[10]){
    int encrypted=0;
    for(int i=0;i<5;i++){
        encrypted=encrypted*10+arr[REALPIN[i]];
    }
    return encrypted;
}