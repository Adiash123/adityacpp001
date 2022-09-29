#include <iostream> 
using namespace std ;

int main ()
{
    cout<<"Numbers 1 to 10 \n" ;
     for(int i=1;i<11;i++)
    {
        cout<<i<<endl;
    }
    cout<<"\n\n\n" ;

    cout<<"Numbers 2 to 20, up in 2s \n" ;

    int num = 2;
    while(num< 21)
    {
        cout << num << endl;
        num = num + 2;
    }

    cout<<"\n\n\n" ;

    cout<<"7 time stable up to 7 x 12\n" ;

    for(int i=1;i<13;i++)
    {
        cout << i*7 << endl;
    }

    cout<<"\n\n\n 13 times table backwards starting with 13 x 13\n" ;

    for (int i = 13; i>0; i--)
    {
        cout <<i*13<< endl;
    }

    cout<<"\n\n\n Ask the user for a number and then print out the full times table for that number from 1-12.\n" ;


    int num2;
    cout <<"Please enter a number)"<< endl;
    cin >> num2;
    for(int i=1;i < 13;i++)
    {
        cout <<i*num<<endl;
    }

    cout<<"\n\n\n Print out letters from A to Z\n" ;

    char letter = 'A';
    for(int i=1; i<27; i++)
    {
        cout << letter<<endl;
 
        letter++;
 
 
    }


    cout<<"\n\n\nPrint out every 3rd letter, starting from c \n" ;

    char alphabet = 'A';
 
    alphabet = alphabet + 2;
    cout<<alphabet<<endl;
 
   while(alphabet > 1)
   {
       alphabet = alphabet + 3;
       cout<<alphabet<<endl;
   }


    cout<<"\n\n\nAsk the user for a number and print out the next 10 in sequence eg if 20 then output 21, 22, ... 30 \n" ;

    int num3;
    cout << "Please enter a number"<<endl;
    cin >> num3;
    for(int i=1 ; i <11; i++)
    {
        cout<<num3+i<<endl;
    }


    cout<<"\n\n\nAsk the user for a number and print out the previous 10 in sequence eg if 20 then output 19, 18 ....10 \n" ;

    int num4;
    cout<<"Please enter a number"<<endl;
    cin >> num4;
    for(int i = 0; i < 11; i++)
    {
        cout<<num4-i<<endl;
    }

    cout<<"\n\n\nPrint all leap years from 1900 to the present \n" ;

    int currentYear = 2022;
    int fromYear = 1900;
    while(fromYear < currentYear)
    {
    
        if(fromYear%4 == 0)
        {
          
            if (fromYear%100 == 0 && fromYear%400 == 0)
            {
                cout <<fromYear<< endl;
            }
            else if(fromYear%4 == 0 && fromYear%100 != 0)
            {
                cout << fromYear <<endl;
            }
        }
        fromYear++;
    }


    cout<<"\n\n\nWrite a program to print all prime numbers between 1 and 100. \n" ;

     for(int i = 1; i<100; i++)
    {
 
        int number= 0;
        for(int x=1; x<=i; x++)
        {
            if(i%x== 0)
            {
                number++;
            }
        }
        if(number == 2)
        {
            cout <<i<< endl;
            number = 0;
        }
    }

    cout<<"\n\n\nWrite a program that will ask the user for a number and then it will tell the user if the number is a prime number. Allow for unlimited entries. \n" ;

    bool endOfProgram = false;
    while(endOfProgram == false)
    {
 
        string end;
        int number1;
        int num5 = 0;
        cout<<"Please enter your number \t" ;
        cin >> number1;
        for(int i=1 ; i<=number1;i++)
        {
 
            if(number1%i == 0)
            {
                num5++;
            }
 
        }
        if(num5 == 2)
        {
            cout<<"it is a prime number"<<endl;
        }
        else
        {
            cout<<"it isn't a prime number"<<endl;
        }
 
        cout<<"If you want to try again, type yes; if you dont want to continue type no"<<endl;
        cin>>end;
 
        if(end == "no")
        {
            break;
        }
        else if(end == "yes")
        {
            cout<<"Type in another number"<<endl;
        }
    }









}