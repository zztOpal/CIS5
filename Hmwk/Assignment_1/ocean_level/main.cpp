/*
 * Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, 
 * write a program that displays:
 *• The number of millimeters higher than the current level that 
 *  the ocean’s level will be in 5 years
 *• The number of millimeters higher than the current level that 
 *  the ocean’s level will be in 7 years
 *• The number of millimeters higher than the current level that 
 *  the ocean’s level will be in 10 years
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 2, 2018, 9:27 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float speed,fiveyears,sevenyears,tenyears;
    speed=1.5;
    fiveyears=5*speed;
    sevenyears=7*speed;
    tenyears=10*speed;
    cout<<"The ocean’s level will be "<<fiveyears<<" millimeters higher than the current level in 5 years."<<endl;
    cout<<"The ocean’s level will be "<<sevenyears<<" millimeters higher than the current level in 7 years."<<endl;
    cout<<"The ocean’s level will be "<<tenyears<<" millimeters higher than the current level in 10 years."<<endl;
    return 0;
}

