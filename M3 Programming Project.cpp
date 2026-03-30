// This is the NumberArray2 Subproject

#include <iostream>
using namespace std;

class NumberArray {
private:
    int size;
    double* data;
    static const int MAX_SIZE = 30;
public:
    NumberArray(int s) : size(s), data(nullptr){ //Find a way to make size = MAX_SIZE. And make MAX_SIZE the default
        data = new double[s];
    }

    ~NumberArray() {
		delete[] data;
		cout << "Memory has been cleared" << endl;
    }

    void fillArray () { 
        cout << "Filling the Dynamic Array! Please enter your chosen number, then press enter" << endl;
        cout << "When satisfied, enter the Sentinel Value of - 0.08" << endl;
        double userChoice = 0;

        for (int d = 0; d < MAX_SIZE || userChoice == -0.08; d++) {
            cin >> userChoice;
            setNumber(d, userChoice);
            size = d;
        }
	}

    void setNumber(int index, double value) {
		if (index >= 0 && index < size) {
            data[index] = value;
        }
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
	static int const MAX_SIZE = 20;
    NumberArray userarray(MAX_SIZE);

    double userChoice = 0;
    int loopIncrement = 0;
    
    cout << "Filling the Dynamic Array! Please enter your chosen number, then press enter" << endl;
    cout << "When satisfied, enter the Sentinel Value of - 0.08" << endl;

    userarray.fillArray();
   
    cout << "The Minimum Value is: " << userarray.getMin() << endl;
    cout << "The Maximum Value is: " << userarray.getMax() << endl;
    cout << "The Average Value is: " << userarray.getAverage() << endl;

    userarray.print();
}
