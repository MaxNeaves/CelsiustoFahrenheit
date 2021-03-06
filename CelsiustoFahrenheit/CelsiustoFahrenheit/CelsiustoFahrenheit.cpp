/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: CelsiustoFahrenheit
 * This program converts a number from Celsius to Fahrenheit.
 */

#include "stdafx.h"
#include <iostream>
using namespace std;

const float FLTFAHRENHEIT = 32;

int main()
{
	float fltCelsius = 0;
	float fltFahrenheit = 32;
	
	cout << "Enter a number in Celsius: ";
	cin >> fltCelsius;

	fltFahrenheit = fltCelsius * 9 / 5 + FLTFAHRENHEIT;

	cout << fltCelsius << " degrees Celsius is " << fltFahrenheit
		<< " degrees Fahrenheit" << endl;

	cout << "Solution: " << fltCelsius << "x9/5+32" << endl;

    return 0;
}

