#include <iostream>
using namespace std;

int main ()
{
    float angle1 ;
    float angle2 ;
    float missingAngle ;

    cout<<"This program will calculate the third missing angle in your triangle" <<endl ;
    cout<<"Please enter your first angle"<<endl ;
    cin>> angle1 ;
    cout <<"Please enter your second angle"<<endl ;
    cin >> angle2 ;


    missingAngle = 180 - (angle1 + angle2) ;

    cout<<"Your missing angle is :\t" <<missingAngle << "\u2103"<<endl ;



}

