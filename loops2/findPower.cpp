#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int power = 1;
    cout << " enter base: ";
    cin >> a;
    cout << "enter exponent: ";
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        power *= a;
    }
    cout << a << " raised to the power" << b << " is " << power;
}