/*
 * Find the errors
 * int main ()
  {
  double number1, number2, sum;
  cout << "Enter a number: ";
  cin << number1;
  cout << "Enter another number: ";
  cin << number2;
  number1 + number2 = sum;
  cout "The sum of the two numbers is " << sum return 0;
  }
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 12, 2018, 4:53 PM
 */

#include <iostream>

using namespace std;

int main ()
{
double number1, number2, sum;
cout << "Enter a number: ";
cin >> number1;
cout << "Enter another number: ";
cin >> number2;
sum = number1 + number2;
cout << "The sum of the two numbers is " << sum<<endl;
return 0;
}

