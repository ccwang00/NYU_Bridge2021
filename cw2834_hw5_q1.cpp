#include<iostream>
using namespace std;


int fib(int n);

int main() {
    int fib_num,n_th;
    cout<<"Please enter a positive integer"<<endl;
    cin>>n_th;

    fib_num=fib(n_th);

    cout<<fib_num<<endl;

    return 0;

}
int fib(int n){
    int i,curr,previousOne,previousTwo;
    //generate all fib list till the n_th fib number;
    if(n==0)
        return 0;
    else if(n<3)
        return 1;
    previousOne=1;
    previousTwo=1;
    curr=0;

    for(i=3;i<=n;i++) {
        curr = previousOne + previousTwo;
        previousOne = previousTwo;
        previousTwo = curr;
    }
    return curr;
}
