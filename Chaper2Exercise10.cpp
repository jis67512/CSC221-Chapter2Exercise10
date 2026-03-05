/*
Code File Name: Chapter2Exercise10.cpp
Programmer: James Scott
Due Date: 03/05/26
Requirements: Chapter 2, Exercise 10 (Miles per Gallon) - A car holds 15 gallons of gasoline
and can travel 375 miles before refueling. Calculate and display miles per gallon (MPG).
*/

#include <iostream>
using namespace std;

int main()
{
	// Declare variables
	int miles_driven = 375;
	int gallons_used = 15;
	double mpg;

	// Miles per gallon formula

	mpg = miles_driven / gallons_used;

		// display miles per gallon
		cout << "Miles per gallon: " << mpg << endl;
}