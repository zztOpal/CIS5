/*
 * A customer in a store is purchasing five items. 
 * The prices of the five items are
 * Price of item 1 = $15.95 
 * Price of item 2 = $24.95 
 * Price of item 3 = $6.95 
 * Price of item 4 = $12.95 
 * Price of item 5 = $3.95
 * Write a program that holds the prices of the five items in five variables. 
 * Display each item’s price, the subtotal of the sale, the amount of sales tax, and the total. 
 * Assume the sales tax is 7%.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 2, 2018, 9:36 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float price1,price2,price3,price4,price5,subtotal,perctax,tax,total;
    price1=15.95;
    price2=24.95;
    price3=6.95;
    price4=12.95;
    price5=3.95;
    subtotal=price1+price2+price3+price4+price5;
    perctax=0.07; 
    tax=subtotal*perctax;
    total=subtotal+tax;
    cout<<"Product 1 costs $"<<price1<<'.'<<endl<<"Product 2 costs $"<<price2<<'.'<<endl;
    cout<<"Product 3 costs $"<<price3<<'.'<<endl<<"Product 4 costs $"<<price4<<'.'<<endl;
    cout<<"Product 5 costs $"<<price5<<'.'<<endl<<"Subtotal is $"<<subtotal<<'.'<<endl;
    cout<<"Tax amount is $"<<tax<<'.'<<endl<<"The total purchase is $"<<total<<'.'<<endl;
    
    return 0;
}

