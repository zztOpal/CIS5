/*
 * Write a program that calculates a car’s gas mileage. 
 * The program should ask the user to enter the number of gallons of gas the car can hold 
 * and the number of miles it can be driven on a full tank. 
 * It should then display the number of miles that may be driven per gallon of gas.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 12, 2018, 5:18 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int mile;
    int gallon;
    double mpg;
    cout << "Please enter the number of gallons of gas the car can hold "<<endl;
    cin >> gallon;
    cout << "Please enter the number of miles car can be driven on a full tank:" << endl;
    cin >> mile;
    mpg = static_cast<double>(mile)/gallon;
    cout << "The number of miles that may be driven per gallon of gas: " << mpg << endl;
    return 0;
}
