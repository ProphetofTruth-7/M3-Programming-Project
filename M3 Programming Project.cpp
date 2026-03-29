// This is the NumberArray2 Subproject

#include <iostream>
using namespace std;

class NumberArray {
private:
    int size;
    double* data;
    int const MAX_SIZE = 20;
public:
    NumberArray(int s, double* d) : size(s), data(d) {}

    int* DataArray = new int[MAX_SIZE];
    NumberArray.data = DataArray;

    int basicFunction() {
        return size + 5;
	}

    int basicFunction(int x) {
        return x + 5;
	}

    void assignIndex(int l, int x) {
        DataArray[l] = x;
    }

    int accessIndex(int l) {
        return DataArray[l];
    }
};

int main()
{
    NumberArray bigboi(5, 0);
    
    cout << bigboi.basicFunction(10) << endl;
    cout << bigboi.basicFunction() << endl;

    bigboi.assignIndex(0, 7);
    cout << bigboi.accessIndex(0) << endl;
}
