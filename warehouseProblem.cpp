#include  <iostream>
using namespace std ;

int main()
{
    int booksNum ;
    int fullBoxes ;
    int remainderBooks ;

    cout<<"This program will tell you:"<<"\n 1. How many full boxes(25 books in 1 box) can be created"<<"\n 2. How many books will be left over" <<endl ;
    cout<< "Please type in the number of books you want to pack" <<endl ;
    cin>> booksNum;


    fullBoxes = booksNum / 25 ;

    remainderBooks = booksNum % 25 ;

    cout<<"Total full boxes that can be created are: \t" <<fullBoxes <<endl ;
    cout<< "Books left over:\t" <<remainderBooks <<endl ;


}
