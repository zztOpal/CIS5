/*
 * Write a program that computes the tax and tip on a restaurant bill for a 
 * patron with a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. 
 * The tip should be 20 percent of the total after adding the tax. 
 * Display the meal cost, tax amount, tip amount, and total bill on the screen.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 1, 2018, 7:35 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float cost,perctax,amtax,perctip,amtip,total;
    cost=88.67;
    perctax=0.0675;
    amtax=cost*perctax;
    perctip=0.2;
    amtip=cost*perctip;
    total=cost+amtax+amtip;
    cout<<"The meal cost $"<<cost<<'.'<<endl<<"The tax is $"<<amtax<<"."<<endl;
    cout<<"The tip is $"<<amtip<<"."<<endl<<"The total price is $"<<total<<'.'<<endl;
    
    return 0;
}

