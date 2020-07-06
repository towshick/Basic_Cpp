#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
    int a;

    cout<<"enter an year:"<<endl;
    cin>> a;


    if( a%4==0 && a%100!=0 || a%400==0 )
        cout<<"Leap year"<<endl;

////    else if(a%400==0 )
////        cout<<"Leap year"<<endl;

    else
        cout<<"Not leap year"<<endl;



    getch();s

   return 0;
}

