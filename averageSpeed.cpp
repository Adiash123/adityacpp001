#include <iostream>
using namespace std ;

int main()
{

    float distanceTravelled;
    float time;
    float averageSpeed ;

    cout<<"This program will tell you the average speed over a set distance and time period"<<endl ;
    cout<<"Please enter your distance that you have travelled in MILES"<<endl ;
    cin>> distanceTravelled ;
    cout<< "Please type in how long did it take to travel in HOURS" <<endl;
    cin>> time ;


    averageSpeed = distanceTravelled / time ;

    cout<<"Your average speed is :\t" <<averageSpeed <<"mph"<<endl ;










}