#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Upper Case\n";
    }
    else
    {
        cout << "Lower Cas\n";
    }
}