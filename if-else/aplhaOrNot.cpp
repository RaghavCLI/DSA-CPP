#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the char: ";
    cin >> ch;
    int ascii = (int)ch;
    if (ascii >= 97 && ascii <= 122 || ascii >= 65 && ascii <= 90)
    {
        cout << "char is aplha";
    }
    else
    {
        cout << " char is not aplha";
    }
}