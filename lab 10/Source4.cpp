#include <iostream>
#include <numeric>
using namespace std;
class Fraction {
private:
    int numerator;
    int denominator;
    void reduce() {
        int gcd = gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }
public:
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
        if (denominator == 0) {
            throw invalid_argument("Denominator cannot be zero.");
        }
        reduce();
    }
    bool operator==(const Fraction& other) const {
        return (numerator == other.numerator && denominator == other.denominator);
    }
    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};
int main() {
    try {
        Fraction frac1(1, 2);
        Fraction frac2(2, 4);
        cout << "Fraction 1: ";
        frac1.display();
        cout << "Fraction 2: ";
        frac2.display();
        if (frac1 == frac2) {
            cout << "The fractions are equal." << endl;
        }
        else {
            cout << "The fractions are not equal." << endl;
        }
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}