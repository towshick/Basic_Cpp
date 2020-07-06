#include<iostream>

using namespace std;

int main()

{

    char x;

    cout<<"Enter any character value:";
    cin>> x;

    x=tolower(x); //tolower function

        if (x=='a' || x=='e' || x=='i'|| x=='o' || x=='u')
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Consonant";
    }




   return 0;
}

