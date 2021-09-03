#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;
    if (a == 0)
    {
        cout << "The given number is zero" << endl;
    }
    else if (a % 2 == 0)
    {
        cout << "The given number is even." << endl;
    }
    else
    {
        cout << "The given number is odd" << endl;
    }
    return 0;
}