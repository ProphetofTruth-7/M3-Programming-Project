#include "numberarray2.h"
#include <string>
using namespace std;

NumberArray::NumberArray(int s, double* d) : size(s), data(d){}

void Date::setMonth(int m) {
    if (m > 0 && m < 13) {
        month = m;
        setMonthName();
    }
    else {
        m = 1;
        month = m;
        setMonthName();
    }
}