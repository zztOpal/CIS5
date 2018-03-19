/*
 * Write a program that converts Celsius temperatures to Fahrenheit temperatures. 
 * The formula is F=(9/5)*C+32
 * F is the Fahrenheit temperature, and C is the Celsius temperature.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 12, 2018, 6:20 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double F, C;
    cout<<"Enter the Celsius temperature is: "<<endl;
    cin>>C;
    F=(9.0/5.0)*C+32;
    cout<<"The Fahrenheit temperature is: "<<F<<endl;
    
    return 0;
}

