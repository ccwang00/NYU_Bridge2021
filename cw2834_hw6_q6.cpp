#include <iostream>

using namespace std;

bool isNumber(string st);
string passingString(string st);
int main() {
    string text;
    cout<<"Please enter a line of text: "<<endl;
    getline(cin,text);

    for (int start = 0, end = 0; end <= text.length(); end++) {
        if ((end == text.length()) || (text[end] == ' ')) {
            string word = text.substr(start, end - start);
            cout << passingString(word) << ' ';
            start = end + 1;
        }
    }




    return 0;
}
//check whether passing string is a number or not

bool isNumber(string st) {
    for (int i = 0; i < st.length(); i++) {
        if (st[i] < '0' || st[i] > '9')
            return false;
    }
    return true;
}

//checking whether there's any number in a string
string passingString(string st){
    if(isNumber(st)==true) {
        string updatedstring;
        for(int i=0;i<st.length();i++){
            updatedstring +='x';
        }
        return updatedstring;
    }
    else
        return st;
}