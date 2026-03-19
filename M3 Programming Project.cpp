// This is the Date Class Subproject

#include <iostream>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
public:
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    void setMonth(int m) {
        if (m > 0 && m < 12) month = m;
    }

    void setYear(int y) {
        if (y > -1) year = y;
    }

    void setDay(int d) {
        if ((month == 4 || month == 6 || month == 9 || month == 11) && (d > 31 && d < 0)) day = d;
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (d > 32 && d < 0)) day = d;
        if (month == 2 && (d > 28 && d < 0)) day = d;
   }

    void setDate(int m, int d, int y);
};

int main()
{
    cout << "DATE CLASS\n";
}
