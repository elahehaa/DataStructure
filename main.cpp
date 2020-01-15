/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elaheh Aghaarabi
 *
 * Created on October 30, 2019, 7:08 PM
 */

#include <iostream>
#include <cstring>


using namespace std;
bool isPalindrome(char* cstr);

/*
 * 
 */
int main() {
    
char s1[50] = "neveroddoreven";
char s2[50] = "notapalindrome";
cout << isPalindrome(s1) << endl; // true
cout << isPalindrome(s2) << endl; // false

    return 0;
}
bool isPalindrome(char* cstr)
{
char* front = cstr ;
char* back = cstr + strlen(cstr)-1;


while (front < back)
{
// Complete code here
  
  
       if (*front == *back) 
       { 
           *front++;
           *back--;
       } 
        
       else return false; 
           
              
}
return true;
} 
