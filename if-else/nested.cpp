#include <iostream>
using namespace std;
int main()
{
    cout << "enter value: ";
    int n;
    cin >> n;
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            cout << "this value is divisible by 5 and 3";
        }
        else
        {
            cout << "not divisible by both 5 and 3";
        }
    }
    else
    {
        cout << "not divisible by 5";
    }
}