#include<iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n,char symbol);


int main() {
    int numOfLine,shiftedSpace,numOfTriangle;
    char symbol;

    cout<<"Please enter the height of the Triangle: "<<endl;
    cin>>numOfLine;
    cout<<"how much space you want the triangle to shift: "<<endl;
    cin>>shiftedSpace;
    cout<<"What symbol do you want to use? "<<endl;
    cin>>symbol;


    printShiftedTriangle(numOfLine,shiftedSpace,symbol);

    cout<<endl;

    cout<<"How many triangle do you want? "<<endl;
    cin>>numOfTriangle;

    printPineTree(numOfTriangle,symbol);

    return 0;

}

void printShiftedTriangle(int n, int m, char symbol){
    int lineCount,spaceCount,starCount;

    for(lineCount=1;lineCount<=n;lineCount++) {
        //printing shifted spaces and spaces in the triangle
        for (spaceCount = 1; spaceCount<=m+(n-lineCount); spaceCount++)
            cout << " ";

        for (starCount = 1; starCount <= 2 * lineCount - 1; starCount++)
            cout << symbol;

        cout << endl;
    }
}


void printPineTree(int n,char symbol){
    int lineCount;

    for(lineCount=1;lineCount<=n;lineCount++) {
        printShiftedTriangle(lineCount+1,n-lineCount,symbol);

    }
}










