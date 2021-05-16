#include <iostream>
#include<vector>
using namespace std;


int main1();
int main2();
int main() {
    cout<<"Version 1: "<<endl;
    main1();
    cout<<endl;
    cout<<"Version 2: "<<endl;
    main2();

    return 0;
}

int main1() {
    cout << "Please enter a sequence of positive integers, each in a separate line.";
    cout << "End you input by typing -1." << endl;
    int num, lineCount = 0;
    int arr[100] = {};
    int numWanted;
    int i = 0;
    while (num != -1) {
        cin >> num;
        lineCount++;
        if (i < lineCount)
            arr[i] = num;
        i++;
    }
    cout << "Please enter a number you want to search: " << endl;
    cin >> numWanted;
    int countFind = 0;
    for (i = 0; i < lineCount; i++) {
        if (arr[i] == numWanted) {
            countFind++;
        }
    }
    if (countFind == 0)
        cout << numWanted << " is not in this list." << endl;
    else {
        cout<<numWanted<<" shows in line ";
        for(i=0;i<lineCount;i++){
            if(arr[i]==numWanted) {
                cout << (i + 1);
                if(countFind>1)
                    cout<<", ";
                else
                    cout<<". ";
            }
        }
    }

}

int main2(){
    vector<int> listVector;
    cout << "Please enter a sequence of positive integers, each in a separate line.";
    cout << "End you input by typing -1." << endl;
    int num, lineCount = 0;
    int numWanted;
    int i = 0;
    while (num != -1) {
        cin >> num;
        listVector.push_back(num);
    }
    cout << "Please enter a number you want to search: " << endl;
    cin >> numWanted;
    int countFind = 0;
    for (i = 0; i < listVector.size(); i++) {
        if (listVector[i] == numWanted) {
            countFind++;
        }
    }
    if (countFind == 0)
        cout << numWanted << " is not in this list." << endl;
    else {
        cout<<numWanted<<" shows in line ";
        for(i=0;i<listVector.size();i++){
            if(listVector[i]==numWanted) {
                cout << (i + 1);
                if(countFind>1)
                    cout<<", ";
                else
                    cout<<". ";
            }
        }
    }

}