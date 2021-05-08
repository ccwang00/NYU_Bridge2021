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

    cout<<"List of Perfect Number between 2 and "<<num<<": "<<endl;
    for(i=2;i<=num;i++){
        if(isPerfect(i))
            cout<<i<<" ";
    }
    cout<<endl;
    cout<<"All pairs of amicable numbers that are between 2 and " <<num<<": "<<endl;
    printAmica(num,ami1,ami2);



    return 0;
}

void analyzeDivisors(int num,int& outCountDivs,int& outSumDivs){
    int i,j;
    int numberOfDives,sumD;
    numberOfDives=0;
    sumD=0;
    for(i=1;i<=sqrt(num);i++) {
        if (num % i == 0) {
            sumD +=i;
            numberOfDives++;
        }
    }
    if(sqrt(num)==(int)sqrt(num))
        j=i-2;
    else
        j=i-1;

    for(i=j;i>=1;i--){
        if (num % i == 0){
            if(num/i !=i && num/i !=num) {
                sumD += (num / i);
            }
            numberOfDives++;
        }
    }
    numberOfDives--;
    outCountDivs=numberOfDives;
    outSumDivs=sumD;

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
