// This is the NumberArray2 Subproject

#include <iostream>
using namespace std;

class NumberArray {
private:
    int size;
    double* data;
public:
    NumberArray(int s) : size(s), data(nullptr){ //Find a way to make size = MAX_SIZE. And make MAX_SIZE the default
        data = new double[s];

        for (int i = 0; i < s; i++) {
            data[i] = 0.0;
		}
    }

    ~NumberArray() {
		delete[] data;
		cout << "Memory has been cleared." << endl;
    }

    void setNumber(int index, double value) {
		if (index >= 0 && index < size) {
            data[index] = value;
        }
    }

    double getNumber(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        }
        else {
            return 0;
            cout << "Invalid Index(out of bounds)" << endl;
        }
    }

    double getMin() const {
        double minimum = data[0];

        for (int i = 1; i < size; i++) {
            if (data[i] < minimum) {
                minimum = data[i];
            }
        }
		return minimum;
    }

};

int main()
{
	static int const MAX_SIZE = 20;
    NumberArray userarray(MAX_SIZE);
    

    userarray.setNumber(0, 7);
    cout << userarray.getNumber(0) << endl;

	cout << userarray.getNumber(19) << endl;
}
