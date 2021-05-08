#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays,int startingDay);
void printYearCalender(int year,int startingDay);
int main() {
    int year,start;

    cout<<"Please enter the year: "<<endl;
    cin>> year;
    cout<<"Please enter the starting days of that year using 1-7: "<<endl;
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
    int month,daysInTheMonth;
    bool leap;
    leap =checkLeapYear(year);

    for(month=1;month<=12;month++) {
        if (month == 1) {
            cout << "January " << year << endl;
            daysInTheMonth = 31;
            startingDay = printMonthCalender(daysInTheMonth, startingDay-1);
        } else if (month == 2) {
            cout << "February " << year << endl;
            if (leap == true) {
                daysInTheMonth = 29;
                startingDay = printMonthCalender(daysInTheMonth, startingDay);
            } else {
                daysInTheMonth = 28;
                startingDay = printMonthCalender(daysInTheMonth, startingDay);
            }
        } else if (month == 3) {
            cout << "March " << year << endl;
            daysInTheMonth = 31;
            startingDay = printMonthCalender(daysInTheMonth, startingDay);
        }else if (month == 4) {
            cout << "April " << year << endl;
            daysInTheMonth = 30;
            startingDay = printMonthCalender(daysInTheMonth, startingDay);
        }
        else if (month == 5) {
            cout << "May " << year << endl;
            daysInTheMonth = 31;
            startingDay = printMonthCalender(daysInTheMonth, startingDay);
        }
        else if (month == 6) {
            cout << "June " << year << endl;
            daysInTheMonth = 30;
            startingDay = printMonthCalender(daysInTheMonth, startingDay);
        }
        else if (month == 7) {
            cout << "July " << year << endl;
            daysInTheMonth = 31;
            startingDay = printMonthCalender(daysInTheMonth, startingDay);
        }
        else if (month == 8) {
            cout << "August " << year << endl;
            daysInTheMonth = 31;
            startingDay = printMonthCalender(daysInTheMonth, startingDay);
        }
        else if (month == 9) {
            cout << "September " << year << endl;
            daysInTheMonth = 30;
            startingDay = printMonthCalender(daysInTheMonth, startingDay);
        }
        else if (month == 10) {
            cout << "October " << year << endl;
            daysInTheMonth = 31;
            startingDay = printMonthCalender(daysInTheMonth, startingDay);
        }else if (month == 11) {
            cout << "November " << year << endl;
            daysInTheMonth = 30;
            startingDay = printMonthCalender(daysInTheMonth, startingDay);
        }else if (month == 12) {
            cout << "December " << year << endl;
            daysInTheMonth = 31;
            startingDay = printMonthCalender(daysInTheMonth, startingDay);
        }

    }

}

