#include <iostream>
#include<string>
using namespace std;


bool isPalindrome(string str);
int main() {
    string word;
    cout<<"Please enter a word: ";
    cin>>word;

    if(isPalindrome(word)==true)
        cout<<word<<" is a palindrome.";
    else
        cout<<word<<" is not a palindrome.";

    return 0;
}

bool isPalindrome(string str){
    int ind;
    string temp("");
    for(ind=str.length()-1;ind>=0;ind--)
        temp +=str[ind];
    if(temp==str)
        return true;
    else
        return false;
}