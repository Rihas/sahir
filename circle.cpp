//============================================================================
// Name        : circle.cpp
// Author      : sahir
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define pi 3.1428571429
#include <math.h>
// # is preprocessor task so its done before program excution

using namespace std;

// main program is a function 

int main() {
	double r , area;

	cout << "Input the radius of circle please \n"; cin>> r ;
// we need to use pow() function in c++
	area=pi*pow(r,2);
	cout << "Area equals " << area << endl; // prints !!!Hello World!!!

// return is last statement in function 
	return 0;
}

