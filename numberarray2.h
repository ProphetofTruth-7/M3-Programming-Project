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



    void basicFunc(int s);

};

#endif