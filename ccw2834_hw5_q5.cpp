#include <iostream>
#include<cmath>
using namespace std;

void analyzeDivisors(int num,int& outCountDivs,int& outSumDivs);
bool isPerfect(int num);
void printAmica(int num, int& outNum1, int& outNum2);
int main() {
    int i,num,ami1,ami2;
    cout<<"Please enter a positive integer >=2: ";
    cin>>num;

    for(i=2;i<=num;i++){
        if(isPerfect(i))
            cout<<i<<" ";
    }

    printAmica(num,ami1,ami2);



    return 0;
}

void analyzeDivisors(int num,int& outCountDivs,int& outSumDivs){
    int i,j;
    int count,sum;
    count=0;
    sum=0;
    for(i=1;i<=sqrt(num);i++) {
        if (num % i == 0) {
            sum +=i;
            count++;
        }
    }
    if(sqrt(num)==(int)sqrt(num))
        j=i-2;
    else
        j=i-1;

    for(i=j;i>=1;i--){
        if (num % i == 0){
            if(num/i !=i && num/i !=num) {
                sum += (num / i);
            }
            count++;
        }
    }
    count--;
    outCountDivs=count;
    outSumDivs=sum;

}

bool isPerfect(int num){
    int outCount,outSum;
    analyzeDivisors(num,outCount,outSum);
    if(outSum==num)
        return true;
    else
        return false;
}

void printAmica(int num, int& outNum1, int& outNum2){
    int i,curr,countD,sumD;
    for(i=1;i<=num;i++){
        analyzeDivisors(i,countD,sumD);
        curr=sumD;
        analyzeDivisors(curr,countD,sumD);
        if(i==sumD && !isPerfect(i))
            cout<<i<<" ";
    }
    cout<<endl;
}