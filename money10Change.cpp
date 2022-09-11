#include <iostream>
using namespace std ;

int main ()
{

// Declaring variables
    float itemCost;
    const float baseAmount = 10.00 ;
    float changeAmount;


    cout<<"This program will tell you how much change you will get from £10 given the cost of an item" <<endl ;
    cout<<"Enter the amount of your item" <<endl ;
    cin>>itemCost ;

    changeAmount = baseAmount - itemCost ;

    cout<<"Change amount: \t£" <<changeAmount <<endl ;








}