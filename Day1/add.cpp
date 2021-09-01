#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two variables \n";
    cin >> a >> b;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int div = a / b;
    int rem = a % b;
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << diff << endl;
    cout << "Product = " << prod << endl;
    cout << "quotient = " << div << endl;
    cout << "remainder = " << rem << endl;

    return 0;
}