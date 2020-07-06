#include<iostream>

using namespace std;

int main()
{
    int num, c, k;

    cout << "Enter number of rows : ";
    cin >> num;
    cout << "\n";

    for (c = 1; c <= num; c++)
    {
        for (k = 1; k <= c; k++)
        {
            cout << c;
        }

        cout << "\n";
    }
}


