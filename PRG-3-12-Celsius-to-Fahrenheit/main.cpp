//
//  main.cpp
//  PRG-3-12-Celsius-to-Fahrenheit
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that converts Celsius temperatures to Fahrenheit temperatures. The
//  formula is
//  F = (9/5)C + 32
//  F is the Fahrenheit temperature, and C is the Celsius temperature

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables
    float fltTempCelsius,
          fltTempFahrenheit;
    
    
    cout << "Please enter a temperature in degrees Celsius: " << endl;
    cin >> fltTempCelsius;
    while(!cin)
    {
        cout << "Please enter a number value:\n";
        cin.clear();
        cin.ignore();
        cin >> fltTempCelsius;
    }
    
    fltTempFahrenheit = ((9.0f/5.0f) * fltTempCelsius) + 32.0f;
    
    cout <<  setprecision(1) << fixed << showpoint;
    
    cout << fltTempCelsius << "C is approximately " << fltTempFahrenheit << "F\n";
    
    return 0;
}


