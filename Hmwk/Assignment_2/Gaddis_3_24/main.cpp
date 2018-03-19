/*
 * Write a program that plays a word game with the user. 
 * The program should ask the user to enter the following:
    • His or her name
    • His or her age
    • The name of a city
    • The name of a college
    • A profession
    • A type of animal
    • A pet’s name
 * After the user has entered these items, the program should display the following story, 
 * inserting the user’s input into the appropriate locations:
 * There once was a person named NAME who lived in CITY. 
 * At the age of AGE, NAME went to college at COLLEGE. 
 * NAME graduated and went to work as a PROFESSION. 
 * Then, NAME adopted a(n) ANIMAL named PETNAME. 
 * They both lived happily ever after!
 */

/* 
 * File:   main.cpp
 * Author: Opal
 *
 * Created on March 12, 2018, 6:26 PM
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    int age;
    string name, city, college, profession, type, pname;
    cout<<"Your name: "<<endl;
    cin>>name;
    cout<<"Your age: "<<endl;
    cin>>age;
    cout<<"Your city: "<<endl;
    cin>>city;
    cout<<"Your college: "<<endl;
    cin>>college;
    cout<<"A profession: "<<endl;
    cin>>profession;
    cout<<"The type of your pet: "<<endl;
    cin>>type;
    cout<<"The name of your pet: "<<endl;
    cin>>pname;
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<'.';
    cout<<" At the age of "<<age<<", "<<name<<" went to college at "<<college;
    cout<<". "<<name<<" graduated and went to work as a "<<profession<<". Then, ";
    cout<<name<<" adopted a(n) "<<type<<" named "<<pname;
    cout<<". They both lived happily ever after!"<<endl;
    return 0;
}

