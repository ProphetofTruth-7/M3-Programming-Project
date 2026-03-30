// This is the NumberArray2 Subproject

#include "numberarray2.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    NumberArray userarray(MAX_SIZE);

    cout << "Please enter the size of your array!" << endl;
    int userSize = 0;
    cin >> userSize;
    userarray.setSize(userSize);

    cout << "Filling the Dynamic Array! Please enter your chosen number, then press enter" << endl;
    double userChoice = 0;

    for (int d = 0; d < userarray.getSize(); d++) {
        cin >> userChoice;
        userarray.setNumber(d, userChoice);
    }

    userarray.print();

    return 0;
}