/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elaheh Aghaarabi
 *
 * Created on November 6, 2019, 8:22 PM
 */

#include <iostream>
#include <string>

using namespace std;

class Movie
{
public:
    
    
        string movieName;
        string mpaaRate;
        int terrible ;
        int bad ;
        int okm ;
        int good ;
        int great ;
        
       void addRating (int rate );
       double getAverage ();
       
       Movie (string name , string mpaa);
       Movie ();
         
};

/*
 * 
 */
int main() {
    
    Movie m1("Interstellar" , "PG-13") , m2 , m3;
    
    
    m2.movieName = "Interstellar";
    m2.mpaaRate = "PG-13";
    m2.addRating (1);
    m2.addRating (2);
    m2.addRating (2);
    m2.addRating (3);
    m2.addRating (3);
    m2.addRating (3);
    m2.addRating (4);
    m2.addRating (4);
    m2.addRating (4);
    m2.addRating (5);
    m2.addRating (5);
    m2.addRating (5);
    m2.addRating (5);
    m2.addRating (5);
    
   double ave2 = m2.getAverage ();
    
    
    cout << m2.movieName << " " << m2.mpaaRate << " " << ave2 << endl;
    
    
    m3.movieName = "Toy Story 3";
    m3.mpaaRate = "G";
    m3.addRating (1);
    m3.addRating (2);
    m3.addRating (2);
    m3.addRating (3);
    m3.addRating (3);
    m3.addRating (3);
    m3.addRating (3);
    m3.addRating (4);
    m3.addRating (4);
    m3.addRating (4);
    m3.addRating (4);
    m3.addRating (5);
    m3.addRating (5);
    m3.addRating (5);
    m3.addRating (5);
    
    
   double ave3 = m3.getAverage ();
    
    
    cout << m3.movieName << " " << m3.mpaaRate << " " << ave3 << endl;

    return 0;
}

void Movie::addRating (int rate )
{
    
    if ((rate>=1) & (rate <=5))
    {
        
        if (rate==1)
            terrible ++ ;
        else if (rate==2)
            bad ++ ;
        else if (rate==3)
            okm ++ ;
        else if (rate==4)
            good ++ ;
        else if (rate==5)
            great ++ ;
    }
    else exit(1);
}
    
    
 double Movie::getAverage ()
 {
     double ave;
     ave= static_cast<double>((terrible) + (2* bad) + (3* okm) + (4* good) + (5* great))/(terrible+bad+okm+good+great);
              
              return ave;  
 }
 
 Movie::Movie (string name , string mpaa)
 {
   movieName = name;
   mpaaRate = mpaa;
 }
 
 
 
Movie:: Movie ()
 {
     
 }
    


