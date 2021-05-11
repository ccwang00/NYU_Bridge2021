#include <iostream>
#include <string>
using namespace std;


int main() {
    string first_name,last_name,middle_name;
    cout<<"Please enter your name (as first name, middle name and last name): "<<endl;
    cin>>first_name>>middle_name>>last_name;

    cout<<last_name<<", "<<first_name<<" "<<middle_name[0]<<".";

    return 0;
}

