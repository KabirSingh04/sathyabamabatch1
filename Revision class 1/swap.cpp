#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    cout << "---before swapping---" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    int c;
    c = a;
    a = b;
    b = c;
    cout << "---After swapping---" << endl;
    cout << " A = " << a << endl;
    cout << "B = " << b << endl;
    return 0;
}