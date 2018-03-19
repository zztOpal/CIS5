/*
 * Find the errors.
 * #include <iostream> using namespace std;
  int main() {
  int number1, number2;
  float quotient;
  cout << "Enter two numbers and I will divide\n"; cout << "the first by the second for you.\n";
  cin >> number1, number2;
  quotient = float<static_cast>(number1) / number2; cout << quotient
  return 0;
  }
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 12, 2018, 5:02 PM
 */

#include <iostream>

using namespace std;

int main() {
float number1, number2;
float quotient;
cout << "Enter two numbers and I will divide the first by the second for you.\n";
cin >> number1>>number2;
quotient = (number1) / number2; 
cout << quotient<<endl;
return 0;
}

