#include <iostream>
using namespace std;
int main()
{
    cout << "enter selling price: ";
    int sell;
    cin >> sell;
    cout << "enter cost price: ";
    int cost;
    cin >> cost;
    if (sell > cost)
    {
        cout << "you had profit of rupees: " << sell - cost;
    }
    if (sell < cost)
    {
        cout << "loss of: " << cost - sell;
    }
    if (sell == cost)
    {
        cout << "no profit no loss";
    }
}