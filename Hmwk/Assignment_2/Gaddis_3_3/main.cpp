/*
 * Write a program that asks for five test scores. 
 * The program should calculate the aver- age test score and display it. 
 * The number displayed should be formatted in fixed-point notation, 
 * with one decimal point of precision.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 12, 2018, 6:12 PM
 */

#include <iostream>
#include <iomanip> 
using namespace std;

int main(int argc, char** argv) {
    double num1, num2, num3, num4, num5, average;
    cout<<"The first grade: "<<endl;
    cin>>num1;
    cout<<"The second grade: "<<endl;
    cin>>num2;
    cout<<"The third grade: "<<endl;
    cin>>num3;
    cout<<"The forth grade: "<<endl;
    cin>>num4;
    cout<<"The fifth grade: "<<endl;
    cin>>num5;
    average=(num1+num2+num3+num4+num5)/5;
    cout<<fixed;
    cout<<setprecision(1)<<"The average of these grades: "<<average<<endl;
    
    return 0;
}

