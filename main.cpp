/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elaheh Aghaarabi
 *
 * Created on November 6, 2019, 7:23 PM
 */

#include <iostream>
#include <string>

using namespace std;

struct Date 
{
int day;
int month; 		
int year;			
};

struct Person 
{
string firstName;
string lastName; 		
Date   bd;
int    age;
};

int calculateAge(Date today,Person& p); 
void printInfo(Person p); 

/*
 * 
 */
int main() {
 
    Date today;

today.month = 11;
today.day=11;
today.year =2019;

Person p;

cout << "First name: ";
cin>> p.firstName;
cout << "Last name: ";
cin>> p.lastName;
cout << "Birth year: ";
cin >> p.bd.year;
cout << "Birth month: ";
cin >> p.bd.month;
cout << "Birth day: ";
cin >> p.bd.day;

   p.age=calculateAge(today,p);
   printInfo(p);
    
    return 0;
}

int calculateAge(Date today,Person& p)
{
today.month = 11;
today.day=11;
today.year =2019;
  if (today.month > p.bd.month) 
    p.age = today.year-p.bd.year ;
    else if (today.month < p.bd.month)
    p.age = today.year-p.bd.year-1 ; 
    else if ((today.month == p.bd.month) & (today.day > p.bd.day))
    p.age = today.year-p.bd.year ;   
    else if ((today.month == p.bd.month) & (today.day < p.bd.day))
    p.age = today.year-p.bd.year-1 ;
    return p.age;
}

void printInfo(Person p)
{
    cout << "Name: " << p.firstName << " " << p.lastName << endl;
    cout << "Age: "  << p.age << endl;
    
}