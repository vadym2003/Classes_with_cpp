#include <iostream>
#include <cmath>

using namespace std;

class triad {
protected:
	double a, b, c;
public:
	void set() {
		cout << "Number one: ";
		cin >> a;
		cout << "Number two: ";
		cin >> b;
		cout << "Number three: ";
		cin >> c;
	}
};
class triangle : public triad {
protected:
	double angA, angB, angC, square, p;
public:
	void angles() {
		angA = acos(((b * b) + (c * c) - (a * a)) / (2 * b * c)) * 57.2957795;
		angB = acos(((a * a) + (c * c) - (b * b)) / (2 * a * c)) * 57.2957795;
		angC = acos(((b * b) + (a * a) - (c * c)) / (2 * b * a)) * 57.2957795;
		cout << "Angles: " << angA << ", " << angB << ", " << angC;
	}
	
	void S() {
		p = (a + b + c) / 2;
		square = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "\nSquare: " << square;
	}
};