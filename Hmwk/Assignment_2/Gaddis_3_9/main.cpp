/*
 * A bag of cookies holds 30 cookies. 
 * The calorie information on the bag claims that there are 10 “servings” in the bag 
 * and that a serving equals 300 calories. 
 * Write a program that asks the user to input how many cookies he or she actually ate 
 * and then reports how many total calories were consumed.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 12, 2018, 5:09 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double numec;         //the number of eaten cookies
    double numc;          //the number of cookies
    double nums;          //the number of serving
    double cps;           //calories per serving
    double cpc;           //calories per cookie
    double total;      //total calories of eaten cookies
    numc = 30;
    nums = 10;
    cps = 300;
    cpc = cps * (nums/numc);
    cout<<"The number of eaten cookies: "<<endl;
    cin>>numec;
    total = (numec) * cpc;
    cout<<"The total calories: "<<total<<endl;
   
    return 0;
}

