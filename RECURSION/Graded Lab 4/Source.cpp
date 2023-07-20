#include"func.h"
int main() {
	int base, exponent;
	cout << "Enter Base Value: ";
	cin >> base;
	cout << "Enter Exponent Value: ";
	cin >> exponent;

	recursion rec(base, exponent);
	int sum = rec.displaySeries(base, exponent);
	cout << "Sum of the series = " << sum <<endl;

	return 0;
}
