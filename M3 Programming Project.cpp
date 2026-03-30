// This is the NumberArray2 Subproject

#include <iostream>
#include <cmath>
using namespace std;

int const MAX_SIZE = 30;

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
		cout << "Memory has been cleared" << endl;
    }

    void setNumber(int index, double value) {
		if (index >= 0 && index < size) {
            data[index] = value;
        }
    }

    void setSize(int x) {
        if (round(x) > 0) {
            size = round(x);
        }
    }

    int getSize() const {
        return size;
	}

    inline double getNumber(int index) const {
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
            if (data[i] < minimum && data[i] != -0.08) {
                minimum = data[i];
            }
        }
		return minimum;
    }

    double getMax() const {
        double maximum = data[0];

        for (int i = 1; i < size; i++) {
            if (data[i] > maximum && data[i] != -0.08) {
                maximum = data[i];
            }
        }
        return maximum;
    }

    double getAverage() const {
        double sum = 0;

        for (int i = 0; i < size; i++) {
            sum += data[i];
        }
        return sum / size;
    }

    void print() const {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
		}
        cout << endl;
    }

};

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

    cout << "The Minimum Value is: " << userarray.getMin() << endl;
    cout << "The Maximum Value is: " << userarray.getMax() << endl;
    cout << "The Average Value is: " << userarray.getAverage() << endl;

    userarray.print();
    return 0;
}