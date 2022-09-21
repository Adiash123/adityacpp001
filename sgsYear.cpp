#include <iostream>
#include <ctime>
using namespace std ;
 
int main()
{
 
    int year;
 
    cout<<"This program will tell you what year you are in based upon the year of joining SGS\n" ;
    cout<<"Please type in what year you joined school\n" ;
    cin>> year ;


    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
   
   
    int currentYear = tPtr->tm_year + 1900;
    int noYear = currentYear - year ;

 
        switch(noYear)

        {
    
            case 6 :
            cout<<"You are in Year 13\n" ;
            break ;
    
            case 5:
            cout<<"You are in Year 12\n" ;
            break ;
    
            case 4:
            cout<<"You are in Year 11\n" ;
            break ;

            case 3:
            cout<<"You are in Year 10\n" ;
            break ;

            case 2:
            cout<<"You are in Year 9\n" ;
            break ;

            case 1:
            cout<<"You are in Year 8\n" ;
            break ;

            case 0:
            cout<<"You are in Year 7" ;
            break ;
    
            default : cout<<"You are not in SGS at the moment. Do you want to try again ?\n" ;  

        }

 
  

        
 
 
    
 
 
 
 
}