#include <iostream>
#include<string>
using namespace std;

const int ALL_CHAR=26;
bool isDelimited(char ch);
void distinctChar(int arr[],char ch);

int main() {
    int countWord=1;
    int countChar=0;
    string lineOfText;
    int arr[ALL_CHAR]={0};//initialize an array setting all char to null

    cout<<"Please enter a line of text: ";
    getline(cin,lineOfText);

    for(int i=0;i<lineOfText.length();i++){
        if (isDelimited(lineOfText[i])) {
            if (countChar > 0) {
                countWord += 1;
            }
            countChar=0;
        }
        else {
            distinctChar(arr,lineOfText[i]);
            countChar++;
        }
    }
    cout<<countWord<<"\twords"<<endl;

    for(int i=0;i<ALL_CHAR;i++){
        if(arr[i]>0){
            cout<<arr[i]<<"\t"<<static_cast<char>('a'+i)<<endl;
        }
    }

    return 0;
}

bool isDelimited(char ch){
    if((ch==' ')||(ch==',')||(ch=='.')){
        return true;
    }
    return false;
}

void distinctChar(int arr[],char ch){
    if((ch>='a') && (ch<='z')){
        arr[ch -'a']++;
    }
    else if((ch>='A'&&(ch<='Z'))){
        arr[ch -'A']++;
    }
}