#include <iostream>
using namespace std ;


int main()
{
    int radius;
    float pi = 3.14 ;
    double circleArea ;
    

    cout<< "This program will calculate the area of a circle" <<endl;
    cout<< "Please enter the RADIUS(in cm)of your circle" <<endl;
    cin>> radius;

    cout<< "Thank you" << endl;
    circleArea = pi * (radius * radius);

    cout<< "The area of your circle is:\t "<<circleArea << "cm\u00B2\n" ;

}
