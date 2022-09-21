#include <iostream>
using namespace std ;
 
int main()
{
 
    int num;
 
    cout<<"This program will tell you your birth month with a number you input and whether you are a \"summer baby\"\n" ;
    cout<<"Please type in a number your birth month number\n" ;
    cin>> num ;
 
    switch(num)
    {
       
        case 1 :
        cout<<" You were born in January.\nYou are not a summer baby\n" ;
        break ;
         
        case 2:
        cout<<"You were born in February. \nou are not a summer baby\n" ;
        break ;
         
        case 3:
        cout<<"You were born in March.\nYou are not a summer baby\n" ;
        break ;
         
        case 4:
        cout<<"You were born in April.\nYou are not a summer baby\n" ;
        break ;
         
        case 5 :
        cout<<"You were born in May.\nYou are not a summer baby\n" ;
        break ;
         
        case 6:
        cout<<"You were born in June.\nYou are a summer baby\n" ;
        break ;
         
        case 7 :
        cout<<"You were born in July.\nYou are a summer baby\n" ;
        break ;
         
        case 8:
        cout<<"You were born in August.\nYou are a summer baby\n" ;
        break ;
         
        case 9:
        cout<<"September.\nYou are not a summer baby\n" ;
        break ;
         
        case 10:
        cout<<"October.Y\nou are not a summer baby" ;
        break ;
         
        case 11:
        cout<<"November.\nYou are not a summer baby\n" ;
        break ;
         
        case 12:
        cout<<"December.\nYou are not a summer baby\n" ;
        break ;
 
        default : cout<<"Sorry I couldn't find your birth month.\n" ;
        
 
 
    }


 
 
 
 
}
 

