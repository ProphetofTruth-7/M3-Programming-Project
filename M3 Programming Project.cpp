/*
 * Date Class Subproject(UNFINISHED DOCUMENTATION< BOZO)
 * ------------------------------------------------------------
 * This program reads the information of a number of students from an input file. It stores the data within an array of structs that contains:
 *  - The Student's Name
 *  - The Student's ID
 *  - The Student's Grades(within a dynamically allocated Array)  
 *  
 * The program computes each student's average score and letter grade, and stores them within the above struct. It then prints a formatted table including all that data
 *
 * Input file format:
 *   #ofStudents #ofGradesPerStudent
 *   studentName studentID grade1 grade2 grade3 grade... gradeX
 *
 * Example file: StudentData.txt
 */

#include "dateheader.h"
#include <iostream>
using namespace std;

int main()
{
    Date calendar(1, 1, 1900, "Janurary");

    int userReply = 0;

    cout << "What is the Year(current or chosen): ";
    cin >> userReply;
    calendar.setYear(userReply);
    cout << "What is the Month(current or chosen): ";
    cin >> userReply;
    calendar.setMonth(userReply);
    cout << "What is the Day(current or chosen): ";
    cin >> userReply;
    calendar.setDay(userReply);

    cout << endl;

    calendar.numericalPrint();
    calendar.monthNormPrint();
    calendar.monthAltPrint();

    return 0;
}
