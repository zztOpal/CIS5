/*
 *Write a program that will compute the total sales tax on a $95 purchase. 
 * Assume the state sales tax is 4 percent and the county sales tax is 2 percent.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 1, 2018, 6:01 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    float price,statetax,countrytax,saleprice,saletax;
    statetax=0.04;
    countrytax=0.02;
    saleprice=95;
    price=saleprice*(1-statetax+countrytax);
    saletax=price*(statetax+countrytax);
    cout<<"The sale tax of a $95 purchase is "<<saletax<<endl;
    return 0;
}

