/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zzafari
 *
 * Created on November 13, 2019, 7:10 PM
 */

#include <iostream>

using namespace std;

class RationalNumber
{
public:
    
    int num ; 
    int denom;
    
    RationalNumber (int a , int b);
    RationalNumber (int a);
    RationalNumber();
            
    RationalNumber add(const RationalNumber& a);
    RationalNumber subtract(const RationalNumber& a);
    RationalNumber multiply(const RationalNumber& a);
    RationalNumber divide(const RationalNumber& a);
    
    void printNumber();
    
};



/*
 * 
 */
int main() {
 RationalNumber rn1(1,6);
 RationalNumber rn2(2);
 RationalNumber r;
 
 cout << "First number: ";
 rn1.printNumber();
 cout << "\nSecond number: ";
 rn2.printNumber();
 cout << "\nAddition: " ;
 r = rn1.add(rn2);
 r.printNumber();
 cout << "\nSubtraction: " ;
 r = rn1.subtract(rn2);
 r.printNumber();
 cout << "\nMultiplication: " ;
 r = rn1.multiply(rn2);
 r.printNumber();
 cout << "\nDivision: " ;
 r = rn1.divide(rn2);
 r.printNumber();
 return 0;
}

void RationalNumber::printNumber()

{  
    cout << num << "/" << denom << endl;
}

RationalNumber::RationalNumber (int a , int b)
{
   num =  a;
   denom = b;
}
RationalNumber::RationalNumber (int a)
    {
      num = a;
      denom = 1;
    }
RationalNumber::RationalNumber ()
    {
      
    }


RationalNumber RationalNumber::add(const RationalNumber& a)
{
    RationalNumber r;
   r.num = (a.num * denom) + (a.denom * num);
   r.denom =(a.denom * denom);
   
   return r;
}
RationalNumber RationalNumber::subtract(const RationalNumber& a)
{
    RationalNumber r;
  r.num = (a.denom * num) - (a.num * denom) ;
  r.denom =(a.denom * denom);  
   
   return r;
}
RationalNumber RationalNumber::multiply(const RationalNumber& a)
{
    RationalNumber r;
  r.num = a.num * num ;
  r.denom = a.denom * denom; 
  return r;
}
RationalNumber RationalNumber::divide(const RationalNumber& a)
{
    RationalNumber r;
  r.denom = a.num * denom ;
  r.num = a.denom * num; 
  return r;
}

    