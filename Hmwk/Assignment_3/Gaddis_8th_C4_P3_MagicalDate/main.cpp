/*
 * The date June 10, 1960 is special because when we write it in the following format, 
 * the month times the day equals the year.
 * 6/10/60
 * Write a program that asks the user to enter a month (in numeric form), a day, 
 * and a two-digit year. 
 * The program should then determine whether the month times the day is equal to the year. 
 * If so, it should display a message saying the date is magic. 
 * Otherwise it should display a message saying the date is not magic.
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on 2018年3月20日, 下午3:58
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float mon, day, year, num;
    cout<<"Please enter a month (in numeric form), a day, and a two-digit year."<<endl;
    cin>>mon>>day>>year;
    num = mon * day;
    if (num == year)
        cout<<"the date is magic."<<endl;
    else 
        cout<<"the date is not magic."<<endl;
    return 0;
}

