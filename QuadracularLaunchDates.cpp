#include <iostream>
using namespace std;
string year;
string month;
int day;

void dayCount(int dayNumber) { //REPLACE WITH SWITCH CASES
    if (dayNumber <= 31) {
        month = "January"; 
        day = dayNumber;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 59) {
        month = "February";
        day = dayNumber - 30;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 90) {
        month = "March";
        day = dayNumber - 58;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 120) {
        month = "April";
        day = dayNumber - 89;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 151) {
        month = "May";
        day = dayNumber - 119;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 181) {
        month = "June";
        day = dayNumber - 150;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 212) {
        month = "July";
        day = dayNumber - 180;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 243) {
        month = "August";
        day = dayNumber - 211;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 273) {
        month = "September";
        day = dayNumber - 242;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 304) {
        month = "October";
        day = dayNumber - 272;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 334) {
        month = "November";
        day = dayNumber - 303;
        cout << month << " " << day << ", ";
    }
    else if (dayNumber <= 365) {
        month = "December";
        day = dayNumber - 333;
        cout << month << " " << day << ", ";
    }

}
void date(int fullNumber) {
    int monthNumber;
    int dayNumber;
    if (fullNumber <= 365) {
        year = "2020";
        monthNumber = fullNumber;
        dayCount(monthNumber);
    }
    else if (fullNumber > 365 && fullNumber <= 730) {
        year = "2021";
        monthNumber = fullNumber - 365;
        dayCount(monthNumber);
    }
    else if (fullNumber > 730 && fullNumber <= 1095) {
        year = "2022";
        monthNumber = fullNumber - 730;
        dayCount(monthNumber);
    }
    else if (fullNumber > 1095 && fullNumber <= 1460) {
        year = "2023";
        monthNumber = fullNumber - 1095;
        dayCount(monthNumber);
    }
    cout << year << endl;
}

int main()
{
    int startingNumber;
    int endingNumber;

    cout << "This program calculates the ideal time to launch a satellite starting from January 1st, 2020." << endl;
    cout << "You will be prompted to enter a start date and an end date. Entering 1, for example, is January 1st, 2020," << endl;
    cout << "while entering 23 would be January 23rd, 2020. Either of your numbers may not exceed 1460 (December 31st, 2023)." << endl;

    cout << "Starting number: " << endl;
    while ((!(cin >> startingNumber)) || startingNumber < 1 || startingNumber > 1460) { // Checks validity and bounds, loops until valid
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input, please enter an integer between 1 and 1460" << endl;

    }
    cout << "You have entered: " << startingNumber << endl;

    cout << "Ending number: " << endl;
    while ((!(cin >> endingNumber)) || endingNumber < 1 || endingNumber > 1460) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input, please enter an integer between 1 and 1460" << endl;

    }
    cout << "You have entered: " << endingNumber << endl;

    for (int i = startingNumber; i < endingNumber; i++) {
        if (((i % 28) + (i % 30) + (i % 31)) % 7 == 0) {
            date(i);
        }
    }
}
/* for loop to count up each day from starting date, stopping at
 end date. Set int i to startingDate, and check if
 ((i % 28)+(i%30)+(i%31)) % 7 == 0
 if false, i++
 if true, convert number into a date and print */