#include "numberarray2.h"
#include <iostream>
using namespace std;

NumberArray::NumberArray(int s) : size(s), data(nullptr) {
    data = new double[s];

    for (int i = 0; i < s; i++) {
        data[i] = 0.0;
    }
}

NumberArray::~NumberArray() {
    delete[] data;
    cout << "Memory has been cleared" << endl;
}

void NumberArray::setNumber(int index, double value) {
    if (index >= 0 && index < size) {
        data[index] = value;
    }
}

void NumberArray::setSize(int x) {
    if (round(x) > 0) {
        size = round(x);
    }
}

int NumberArray:getSize() const {
    return size;
}

inline double NumberArray::getNumber(int index) const {
    if (index >= 0 && index < size) {
        return data[index];
    }
    else {
        return 0;
        cout << "Invalid Index(out of bounds)" << endl;
    }
}

double NumberArray::getMin() const {
    double minimum = data[0];

    for (int i = 1; i < size; i++) {
        if (data[i] < minimum && data[i] != -0.08) {
            minimum = data[i];
        }
    }
    return minimum;
}

double NumberArray:getMax() const {
    double maximum = data[0];

    for (int i = 1; i < size; i++) {
        if (data[i] > maximum && data[i] != -0.08) {
            maximum = data[i];
        }
    }
    return maximum;
}

double NumberArray::getAverage() const {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

void NumberArray::print() const {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}