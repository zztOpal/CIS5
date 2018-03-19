/*
 * Find the errors.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 12, 2018, 6:07 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double number1, number2;
cout << "Enter two numbers and I will multiply them by 50 for you."<<endl;
cin >> number1 >> number2;
number1 *= 50;
number2 *= 50;
cout << number1 << " " << number2;
    return 0;
}

