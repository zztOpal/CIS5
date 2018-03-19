/*
 * Suppose an employee gets paid every two weeks and earns $2,200 each pay period. 
 * In a year the employee gets paid 26 times. 
 * Write a program that defines the following variables:
 * payAmount:This variable will hold the amount of pay the employee earns each pay period. 
 *           Initialize the variable with 2200.0.
 * payPeriods:This variable will hold the number of pay periods in a year. 
 *            Initialize the variable with 26.
 * annualPay:This variable will hold the employee’s total annual pay, which will be calculated.
 * The program should calculate the employee’s total annual pay by multiplying 
 * the employee’s pay amount by the number of pay periods in a year and 
 * store the result in the annualPay variable. 
 * Display the total annual pay on the screen.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 2, 2018, 11:01 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float payAmount,payPeriods,annualPay;
    payAmount=2200.0;
    payPeriods=26;
    annualPay=payAmount*payPeriods;
    cout<<"The total annual pay is "<<annualPay<<'.'<<endl;
    return 0;
}

