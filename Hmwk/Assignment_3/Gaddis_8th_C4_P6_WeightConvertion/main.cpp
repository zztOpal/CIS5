/*
 * Scientists measure an object’s mass in kilograms and its weight in newtons. 
 * If you know the amount of mass that an object has, 
 * you can calculate its weight, in newtons, with the following formula:
 * Weight = mass * 9.8
 * Write a program that asks the user to enter an object’s mass, 
 * and then calculates and displays its weight. 
 * If the object weighs more than 1,000 newtons, display a message indicating that 
 * it is too heavy. If the object weighs less than 10 newtons, 
 * display a mes- sage indicating that the object is too light.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on 2018年3月20日, 下午5:04
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float mass, weight;
    cout<<"Please enter the mass of the object."<<endl;
    cin>>mass;
    weight = mass * 9.8;
    if (weight < 10)
        cout<<"The object is too light."<<endl;
    else if (weight > 1000)
        cout<<"The object is too heavy."<<endl;
    else
        cout<<"The object is in a normal weight."<<endl;
    return 0;
}

