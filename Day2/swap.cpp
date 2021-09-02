#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout << "Enter two numbers : " << endl;
    cin >> x >> y;
    cout << "----Before Swapping----" << endl;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    int z;
    z = x;
    x = y;
    y = z;
    cout << "----After Swapping----" << endl;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    return 0;
}