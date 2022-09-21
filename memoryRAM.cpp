#include<iostream>
using namespace std;

int main()
{
  int ram;

  cout<<"Please type in how many gigabytes of RAM your computer has? " ;
  cin>> ram ;

  switch(ram)
  {
    case 2 :case 4 :case 8 :case 16 :case 32 :case 64 : cout<<"Thank you for inputting "<<ram<<" Your input is valid. Good Job !" ; break;

    default : cout<<ram<< "  is not a valid input, not possible to have "<<ram<<"GB RAM" ;



  }

}
