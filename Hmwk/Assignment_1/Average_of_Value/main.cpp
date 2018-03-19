/*
 * To get the average of a series of values, you add the values up and then 
 * divide the sum by the number of values. 
 * Write a program that stores the following values in five different 
 * variables: 28, 32, 37, 24, and 33. 
 * The program should first calculate the sum of these five variables 
 * and store the result in a separate variable named sum. 
 * Then, the program should divide the sum variable by 5 to get the average. 
 * Display the average on the screen.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 1, 2018, 8:16 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float A,B,C,D,E,sum,average;
    A=28;
    B=32;
    C=37;
    D=24;
    E=33;
    sum=A+B+C+D+E;
    average=sum/5;
    cout<<"The average of five numbers is "<<average<<'.'<<endl;
    return 0;
}

