/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elaheh Aghaarabi
 *
 * Created on October 24, 2019, 11:58 AM
 */

#include <iostream>
#include <string>


using namespace std;

/*
 * 
 */
int main() {
    
    int i, j , row , column , number;
    char letter;
    bool exit=0;
    
    char seat[7][4] = 
    {
        {'A','B','C','D'},
        {'A','B','C','D'},
        {'A','B','C','D'},
        {'A','B','C','D'},
        {'A','B','C','D'},
        {'A','B','C','D'},
        {'A','B','C','D'}
        
    };
    
    char fullSeat [7][4]= {
        {'X','X','X','X'},
        {'X','X','X','X'},
        {'X','X','X','X'},
        {'X','X','X','X'},
        {'X','X','X','X'},
        {'X','X','X','X'},
        {'X','X','X','X'}
    };
    
    
    for ( i=0;i<7;i++)
    {
         cout << i+1 << " ";
        for ( j=0;j < 4; j++)
        {
    cout << seat[i][j] << " ";
        }
       
        
        cout << endl;
    }
    do
    {
    
    cout << "Please enter the number of row and the seat" << endl;
    cin >> number >> letter;
    
    
    switch (letter) {
            case 'A':
                       column=0;
                       break;
            case 'B':
                       column=1;
                       break;        
            case 'C':
                       column=2;
                       break; 
            case 'D':
                       column=3;
                       break;
            default :
            cout << "Please select within the range";
    }
    switch (number) {
            case 1:
                       row=0;
                       break;
            case 2:
                       row=1;
                       break;        
            case 3:
                       row=2;
                       break; 
            case 4:
                       row=3;
                       break;
            default :
            cout << "Please select within the range";
    }
   
    
    if (!(seat[row][column]=='X'))
    {
    seat[row][column]='X';
    for ( i=0;i<7;i++)
    {
         cout << i+1 << " ";
        for ( j=0;j < 4; j++)
        {
    cout << seat[i][j] << " ";
        }
       
        
        cout << endl;
    }
    cout<<"press 1 to exit or 0 to continue";
    cin >> exit;
    }
    else if (seat[row][column]=='X')
    {
        cout << "This seat is already taken" << endl;
        
        
        
    }
    
    }
    while((!(exit==1)) || (seat ==fullSeat));
       
        
   
    
    
    

    return 0;
}

