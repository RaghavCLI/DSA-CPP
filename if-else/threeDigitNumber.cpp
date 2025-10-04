#include <iostream>
using namespace std;
int main()
{
    // cout << "enter a number";
    // int n;
    // cin >> n;
    // if (n >= 100 && n <= 999)
    // {
    //     cout << "it is a three digit number";
    // }
    // else
    // {
    //     cout << "not a three digit number";
    // }
    // cout << "enter a number: ";
    // int n;
    // cin >> n;
    // if (n % 5 == 0 && n % 3 == 0)
    // {
    //     cout << "this number is divisible by both 5 and 3.";
    // }
    // else
    // {
    //     cout << "not divisible";
    // }
    cout << "enter a number: ";
    int n;
    cin >> n;
    if (n % 5 == 0 || n % 3 == 0)
    {
        cout << "this number is divisible by 5 or 3.";
    }
    else
    {
        cout << "not divisible";
    }
}