/*
 * A car holds 15 gallons of gasoline and can travel 375 miles before refueling. 
 * Write a program that calculates the number of miles per gallon the car gets. 
 * Display the result on the screen.
 * Hint: Use the following formula to calculate miles per gallon (MPG):
 * MPG   Miles Driven/Gallons of Gas Used
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 2, 2018, 9:49 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float gallons,miles,mpg;
    gallons=15;
    miles=375;
    mpg=miles/gallons;
    cout<<"The MPG of the car is "<<mpg<<'.'<<endl;
    return 0;
}

