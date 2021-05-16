#include <iostream>
#include<string>
using namespace std;

string* createWordsArray(string sentence, int& outWordsSize);

int main() {
    string str;
    cout<<"Please enter a sentence: "<<endl;
    getline(cin,str);
    int arr_size;
    string* words_arr=createWordsArray(str,arr_size);
    for(int i=0;i<arr_size;i++){
        cout<<words_arr[i]<<endl;
    }

    delete []words_arr;

    return 0;
}


string* createWordsArray(string sentence, int& outWordsSize) {
    int countWord = 0;
    string* words=new string[outWordsSize]();
    int beginning=0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i]==' ') {
            words[countWord++]= sentence.substr(beginning,i-beginning);
            beginning=i+1;
        }


    }
    words[countWord++]=sentence.substr(beginning);
    outWordsSize=countWord;
    return words;
}