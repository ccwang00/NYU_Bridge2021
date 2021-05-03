#include <iostream>
#include<cmath>
using namespace std;

double eApprox(int n);
int main() {
    cout.precision(30);
    for(int n=1;n<=15;n++){
        cout<<"n= "<<n<<'\t'<<eApprox(n)<<endl;
    }

    return 0;
}

double eApprox(int n){
    double i,product,sum;
    product=1.0;
    sum=1.0;
    for(i=1;i<=(n+1);i++){
        product *=i;
        sum +=(1/product);
    }
    return sum;
}