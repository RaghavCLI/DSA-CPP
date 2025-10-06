// 1 2 4 8 ...16
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int a = 2;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << endl;
    //     a = a * 3;
    // }
    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }
}