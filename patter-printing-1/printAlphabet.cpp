#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'D'; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}