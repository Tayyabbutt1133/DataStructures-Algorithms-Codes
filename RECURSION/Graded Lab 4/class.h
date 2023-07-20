#include <iostream>
#include"func.h"
using namespace std;
class recursion {
public:
	int base;
	int exponent;

	recursion(int base, int exponent) {
		this->base = base;
		this->exponent = exponent;
	}

	int displaySeries(int base, int exponent);
	int calculateTerm(int base, int exponent);
};