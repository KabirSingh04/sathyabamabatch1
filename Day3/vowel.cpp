#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter your alphabet : " << endl;
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "The entered alphabet is a vowel." << endl;
    }
    else
    {
        cout << "The entered alphabet is a consonant." << endl;
    }
    return 0;
}