#include <iostream>
using namespace std;
int main()
{
    cout << "enter percentage: ";
    int n;
    cin >> n;
    if (n >= 91)
    {
        cout << "excellent";
    }
    else if (n >= 81)
    {
        cout << "very good";
    }
    else if (n >= 71)
    {
        cout << "good";
    }
    else if (n >= 61)
    {
        cout << "can do better";
    }
    else if (n >= 51)
    {
        cout << "below average";
    }
    else if (n >= 41)
    {
        cout << "average";
    }
    else
    {
        cout << "fail";
    }
}