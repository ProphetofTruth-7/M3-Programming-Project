#ifndef NUMBERARRAY2_H
#define NUMBERARRAY2_H
using namespace std;

// This is the Header File, containing Prototypes for all Member Function and the Class itself //
class NumberArray {
private:
    int size;
    double* data;
public:
    // Constructor //
    NumberArray(int s, double* d);

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

#endif

