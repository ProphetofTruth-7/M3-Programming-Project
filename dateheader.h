#ifndef DATEHEADER_H
#define DATEHEADER_H
#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
    string monthName;
public:
    Date(int m, int d, int y, string n);

    void setMonth(int m);

    void setMonthName();

    void setYear(int y);

    void setDay(int d);

    bool isLeapYear();

    bool isLeapYear(int testyVar);

    int lastDay();
    
    int lastDay(int testyVar);

    int getDay() const;

    int getMonth() const;

    int getYear() const;

    string getMonthName() const;

    void numericalPrint();

    void monthNormPrint();

    void monthAltPrint();
};
#endif