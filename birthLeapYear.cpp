#include <iostream>
using namespace std ;

int main()
{

  int year;

  cout << "Enter your birth year: ";
  cin >> year;

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    cout << "You were born on a leap year";
  }
  else {
    cout << "You weren't born in a leap year.";
  }

  return 0;



}