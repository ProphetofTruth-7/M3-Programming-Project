#ifndef DATEHEADER_H
#define DATEHEADER_H
#include <string>
using namespace std;


/*
 * lastDay()
 * ------------------------------------------------------------
 * Returns the upper limit in days of a given month value
 *
 * Inputs:
 *   month          - The private integer variable
 * Outputs:
 *   Upper Limit    - A valid integer that corresponds to the last day of the given month
 *   isLeapYear     - A function called only if the month == 2 in which the state of the year(if its a leap year) is checked and the Upper Limit is altered as needed
 *
 * Preconditions:
 *   - setYear has been run or the default is the expected variable
 *   - isLeapYear exists if the month == 2
 *
 * Postconditions:
 *   - An integer value of 31, 30, 29, or 28 is returned to the setDay function according to neccessity
 *   - isLeapYear is run immediately afterwards if the month == 2
 */
class Date {
private:
    int month;
    int day;
    int year;
    string monthName;
public:
    // Constructor //
    Date(int m, int d, int y, string n);

    // Function Prototypes/Documentation //
 /*
 * setMonth
 * ------------------------------------------------------------
 * Sets the variable month to default value unless given a valid value(1-12)
 *
 * Inputs:
 *   m              - A integer variable given directly or via User input
 * Outputs:
 *   month          - A valid integer that corresponds to a calendar. If given input was invalid, resorts to default given by Constructor
 *   setMonthname   - A function called that gives the name of the given integer or its resorted default
 *
 * Preconditions:
 *   - Contructor Default exists and is itself valid
 *
 * Postconditions:
 *   - month is either a valid integer corresponding to the calendar or the default value
 *   - setMonthName is ran immediately following setMonth
 */
    void setMonth(int m);

 /*
 * setMonthName
 * ------------------------------------------------------------
 * Sets the variable monthName to string corresponding to the current month value
 *
 * Inputs:
 *   month          - An extant integer variable, formalized by the calling of the setMonth function
 * Outputs:
 *   monthName      - A string that corresponds to a calendar month.
 *
 * Preconditions:
 *   - setMonth has already run(whether it defaulted or not is inconsequential)
 *
 * Postconditions:
 *   - monthName is a string corresponding to the calendar and the current month value(if valid) or default value
 */
    void setMonthName();

/*
 * setYear
 * ------------------------------------------------------------
 * Sets the variable year to default value unless given a valid value(>-1)
 *
 * Inputs:
 *   y              - A integer variable given directly or via User input
 * Outputs:
 *   year          - A valid integer greater than 0. If given input was invalid, resorts to default given by Constructor
 *
 * Preconditions:
 *   - Contructor Default exists and is itself valid
 *
 * Postconditions:
 *   - year is either a valid integer greater than 0 or the default value
 */
    void setYear(int y);

/*
 * setDay
 * ------------------------------------------------------------
 * Sets the variable day to default value unless given a valid value above 0 and below an upper limit given by the called function lastDay
 *
 * Inputs:
 *   d              - A integer variable given directly or via User input
 * Outputs:
 *   day            - A valid integer that corresponds to a calendar. If given input was invalid, resorts to default given by Constructor. Falls within a limit set by the function lastDay
 *   lastDay        - A function called that declares the upper limit that a given d value cannot breach
 *
 * Preconditions:
 *   - Contructor Default exists and is itself valid
 *   - Function lastDay exists
 *
 * Postconditions:
 *   - day is either a valid integer that falls within a calendarilly respective limit or the default value
 *   - lastDay is ran immediately following setDay
 */
    void setDay(int d);

/*
 * lastDay()
 * ------------------------------------------------------------
 * Returns the upper limit in days of a given month value
 *
 * Inputs:
 *   month          - The private integer variable
 * Outputs:
 *   Upper Limit    - A valid integer that corresponds to the last day of the given month
 *   isLeapYear     - A function called only if the month == 2 in which the state of the year(if its a leap year) is checked and the Upper Limit is altered as needed
 *
 * Preconditions:
 *   - setYear has been run or the default is the expected variable
 *   - isLeapYear exists if the month == 2
 *
 * Postconditions:
 *   - An integer value of 31, 30, 29, or 28 is returned to the setDay function according to neccessity
 *   - isLeapYear is run immediately afterwards if the month == 2
 */
    int lastDay();

/*
 * lastDay(arbitrary)
 * ------------------------------------------------------------
 * Returns the upper limit in days of a arbitrary month value
 *
 * Inputs:
 *   testyVar       - An arbitrary, easily accessible integer value that corresponds to the months of the calendar
 * Outputs:
 *   Upper Limit    - A valid integer that corresponds to the last day of the arbitrary month
 *   isLeapYear     - A function called only if the arbitrary month == 2 in which the state of the year(if its a leap year) is checked and the Upper Limit is altered as needed
 *
 * Preconditions:
 *   - testyVar is a valid integer within the range 1-12
 *   - isLeapYear exists if the month == 2
 *
 * Postconditions:
 *   - An integer value of 31, 30, 29, or 28 is returned according to neccessity
 *   - isLeapYear is run immediately afterwards if the month == 2
 */
    int lastDay(int testyVar);

    bool isLeapYear();

    bool isLeapYear(int testyVar);

    int getDay() const;

    int getMonth() const;

    int getYear() const;

    string getMonthName() const;

    void numericalPrint();

    void monthNormPrint();

    void monthAltPrint();
};
#endif