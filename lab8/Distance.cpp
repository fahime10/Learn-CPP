#include <iostream>
#include <fstream>

using namespace std;

class Distance {
public:
    Distance() {
        feet_ = 0;
        inches_ = 0;
    }

    Distance(int feet, double inches) {
        feet_ = feet;
        inches_ = inches;
    }

    Distance operator + (const Distance& other) const {
        Distance sum;
        sum.feet_ = this->feet_ + other.feet_;
        sum.inches_ = this->inches_ + other.inches_;

        if (sum.inches_ >= 12) {
            sum.inches_ -= 12;
            sum.feet_++;
        }

        return sum;
    }

    bool operator == (const Distance& other) const {
        return (this->feet_ == other.feet_ && this->inches_ == other.inches_);
    }

    friend ostream& operator << (ostream& os, Distance& dist) {
        return os << dist.feet_ << "\' " << dist.inches_ << "\"";
    }

    friend istream& operator >> (istream& is, Distance& dist) {
        cout << "Please input feet, press enter, then input inches" << endl;
        return is >> dist.feet_ >> dist.inches_;
    }

    friend ifstream& operator >> (ifstream& in, Distance& dist) {
        in >> dist.feet_ >> dist.inches_;
        return in;
    }

    friend ofstream& operator << (ofstream& out, Distance& dist) {
        out << dist.feet_ << " " << dist.inches_;
        return out;
    }

private:
    int feet_;
    double inches_;
};

int main() {
    Distance a;
    Distance b(5, 9.0);
    Distance c(1, 11.0);
    Distance d;

    a = b + c;

    cout << a << endl;
    cout << b << endl;

    cin >> d;
    cout << d << endl;

    ofstream fout ("data.txt");
    if (!fout.is_open()) {
        cerr << "Error opening the file for writing." << endl;
        return 1;
    }

    fout << a << endl;
    fout << b << endl;
    fout.close();

    ifstream file("data.txt");

    if (!file.is_open()) {
        cerr << "Error opening the file for reading." << endl;
        return 1;
    }

    file >> b;
    file.close();


    return 0;
}
