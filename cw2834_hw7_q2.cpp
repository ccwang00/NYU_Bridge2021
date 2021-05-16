#include <iostream>
#include<string>
using namespace std;


void distinctChar(int arr[],char ch);
bool checkAnagrams(string str1,string str2);

int main() {
    string s1,s2;
    cout<<"Please enter two lines of texts:"<<endl;
    getline(cin,s1);
    getline(cin,s2);
    if(checkAnagrams(s1,s2))
        cout<<"Two strings are anagrams!"<<endl;
    else
        cout<<"Two string are not anagrams."<<endl;



    return 0;
}

bool checkAnagrams(string str1,string str2){
    int first[26]={0};
    int second[26]={0};

    for(int i=0;i<str1.length();i++){
        char ch=str1[i];
        distinctChar(second,ch);

    }
    for(int i=0;i<str2.length();i++){
        char ch=str2[i];
        distinctChar(first,ch);
    }
    for(int i=0;i<26;i++){
        if(first[i] != second[i])
            return false;
    }

    return true;
}

void distinctChar(int arr[],char ch){
    if((ch>='a') && (ch<='z')){
        arr[ch -'a']++;
    }
    else if((ch>='A'&&(ch<='Z'))){
        arr[ch -'A']++;
    }
}