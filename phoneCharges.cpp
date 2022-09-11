#include <iostream>
using namespace std;

int main()
{

    int secondsNum;
    float phoneCost ;
    const float standardCharge = 0.08;

    cout<<"This program will tell you how much did your phone call cost" <<endl ;
    cout<<"Please enter how long you talked on the phone in seconds"<<endl ;
    cin>> secondsNum ;

    phoneCost = (secondsNum/60) * standardCharge ;

    cout<< "Your phone call costed: \t £" <<phoneCost << endl ;


}