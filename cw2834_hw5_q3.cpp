#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays,int startingDay);
void printYearCalender(int year,int startingDay);
int main() {
    int year,start;

    cout<<"Please enter the year: "<<endl;
    cin>>year;
    cout<<"Please enter the starting days of that month using 1-7: "<<endl;
    cin>>start;

    printYearCalender(year,start);


    return 0;
}

int printMonthCalender(int numOfDays,int startingDay) {
    int i, weekDay,lastDay;
    cout << "Mon" << "\t" << "Tue" << "\t" << "Wed" << "\t" << "Thu" << "\t" << "Fri" << "\t" << "Sat" << "\t" << "Sun"
         << "\t" << endl;

    for(weekDay=0;weekDay<startingDay;weekDay++){
        cout<<"\t";
    }

    for (i = 1; i <= numOfDays; i++) {
        cout << i << "\t";

        if (++weekDay > 6) {
            cout << "\n";
            weekDay = 0;
        }
        startingDay=weekDay;
    }
    cout<<endl;
    cout<<endl;
    lastDay=weekDay;
    return lastDay;
}

bool checkLeapYear(int year){
    if(year % 4 ==0 || year%400==0)
        return true;
    else
        return false;
}

void printYearCalender(int year,int startingDay){
    int i,header,curr_month;
    string month;

    bool leap;

    leap =checkLeapYear(year);
    for(curr_month=1;curr_month<=12;curr_month++)
        if(curr_month==1) {
            cout << "January" << year << endl;
            printMonthCalender(31, startingDay);
        }
        if(curr_month==2 && leap==true) {
        cout << "February" << year << endl;
        printMonthCalender(29, );
        }


    }

}

