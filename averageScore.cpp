#include <iostream>
using namespace std;

int main ()
{
    int scoreMaths;
    int scoreEnglish;
    int scoreScience;
    int testsAverage;

    cout<<"This program will calculate the average of your test scores."<<endl;
    cout<<"Please enter your Maths score and press enter: "<<endl;
    cin>>scoreMaths;

    cout<<"Please enter your English score and press enter: "<<endl;
    cin>>scoreEnglish;

    cout<<"Please enter your Science score and press enter: "<<endl;
    cin>>scoreScience;

    testsAverage = (scoreMaths + scoreEnglish + scoreScience)/3 ;
    cout<<"The average of your tests are: "<<testsAverage<<endl;


}
