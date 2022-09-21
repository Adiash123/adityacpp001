#include <iostream>
using namespace std ;
 
int main()
{
 
    int num;
 
    cout<<"This program will tell you your fortune based on the number you choose\n" ;
    cout<<"Please type in a number between 1 and 4\n" ;
    cin>> num ;
 
    switch(num)
    {
       
        case 1 :
        cout<<"You will recieve 10 million pounds within the next 100 years\n" ;
        break;
 
        case 2 :
        cout<<"You will be forced to donate to charity every month with a minimum payment of 5 pounds a month\n" ;
        break ;
 
        case 3 :
        cout<<"You won't have any respect in society over the upcoming few days\n" ;
        break ;
 
        case 4 :
        cout<<"Please get of your screen and utilise your time in something that isn't biased\n" ;
        break ;
 
        default : cout<<"Sorry I couldn't find your fortune. Please rerun this program and enter a sensible input\n" ;
        
 
 
    }
 
 
 
 
}
 

