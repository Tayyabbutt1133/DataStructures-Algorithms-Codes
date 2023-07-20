#pragma once 
#include"class.h"
// Function for displaying the series and calculating the sum
int recursion::displaySeries(int base, int exponent) {
	if (exponent == 0)
	{
		return 0;
	}
	int currentTerm = calculateTerm(base, exponent);
	cout << base << "^" << exponent << " = " << currentTerm << endl;
	return currentTerm + displaySeries(base, exponent - 1);
}
// Function to calculate the value of a single term in the series
int recursion::calculateTerm(int base, int exponent) {
	if (exponent == 0)
	{
		return 1;
	}
	return base * calculateTerm(base, exponent - 1);
}