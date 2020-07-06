#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
    float a,b;

    cout<<"Enter two integer :"<<endl;
    cin>>a >>b;

        cout<< showpoint;
        cout<< fixed;
        cout<< setprecision(2);
        //cout<<noshowpoint;

    float sum= a+b;
    cout<<setw(30)<< "Summation is :" <<sum<<endl;


    float sub= a-b;
    cout<<setw(30)<< "Substraction is :" <<sub<<endl;

    float mul= a*b;
    cout<<setw(30)<< "Multiplication is :" <<mul<<endl;

    float div= a/b;
    cout<<setw(30)<< "Division is :" <<div<<endl;







    //float rem= a%b;
    //cout<< "Remainder is :" <<rem<<endl;



   return 0;
}

