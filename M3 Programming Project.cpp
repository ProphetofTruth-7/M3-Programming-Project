// This is the Date Class Subproject

#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
    string monthName;
public:
    Date(int m, int d, int y, string n) : month(m), day(d), year(y), monthName(n) {}

    void setMonth(int m) {
        if (m > 0 && m < 12) {
            month = m;
        }
        else {
            m = 1;
            month = m;
        }

        if (month == 1) {
            monthName = "Janurary";
        }
        else if (month == 2) {
            monthName = "Feburary";
        }
        else if (month == 3) {
            monthName = "March";
        }
        else if (month == 4) {
            monthName = "April";
        }
        else if (month == 5) {
            monthName = "May";
        }
        else if (month == 6) {
            monthName = "June";
        }
        else if (month == 7) {
            monthName = "July";
        }
        else if (month == 8) {
            monthName = "August";
        }
        else if (month == 9) {
            monthName = "September";
        }
        else if (month == 10) {
            monthName = "October";
        }
        else if (month == 11) {
            monthName = "November";
        }
        else {
            monthName = "December";
        }
    }

    void setYear(int y) {
        if (y > -1) {
            year = y;
        }
        else {
            y = 1900;
            year = y;
        }
    }

    bool isLeapYear() {
        if (year % 4 == 0) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isLeapYear(int testyVar) {
        if (testyVar % 4 == 0) {
            return true;
        }
        else {
            return false;
        }
    }

    void setDay(int d) {
        if ((month == 4 || month == 6 || month == 9 || month == 11) && (d > 0 && d < 31)) {
            day = d;
        }
        else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (d > 0 && d < 32)) {
            day = d;
        }
        else if (month == 2 && isLeapYear() == true && (d > 0 && d < 30)) {
            day = d;
        }
        else if (month == 2 && isLeapYear() == false && (d > 0 && d < 29)) {
            day = d;
        }
        else {
            d = 1;
            day = d;
        }
    }

    int getDay() const {
        return day;
    };

    int getMonth() const {
        return month;
    };

    int getYear() const {
        return year;
    };

    void numericalPrint() {
        cout << month << "/" << day << "/" << year << endl;
    }

    void monthNormPrint() {
            cout << monthName << " " << day << ", " << year << endl;
    }
    void monthAltPrint() {
        cout << day << " " << monthName << " " << year << endl;
    }

};

int main()
{
    Date choice(1, 1, 1900, "Janurary");
    choice.setYear(2024);
    choice.setMonth(2);
    choice.setDay(29);

    cout << choice.getMonth() << endl;
    cout << choice.getDay() << endl;

    if (choice.isLeapYear() == true) {
        cout << "noodle4" << endl;
    }


    choice.numericalPrint();

}
