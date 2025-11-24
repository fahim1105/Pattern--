#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the square value: ";
    cin >> n;
    // cout << "----------Number Pattern----------\n";
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "----------Star Pattern----------\n";
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
    // cout << "----------Alphabet Pattern----------\n";

    // for (int i = 0; i <= n - 1; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j <= n - 1; j++)
    //     {
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << '\n';
    // }
    // cout << "----------Number Increase Pattern----------\n";
    // int num = 1;
    // for (int i = 0; i <= n - 1; i++)
    // {
    //     for (int j = 0; j <= n - 1; j++)
    //     {
    //         cout << num << " ";
    //         num = num + 1;
    //     }
    //     cout << '\n';
    // }
    cout << "----------Triangle Pattern----------\n";
    cout << "----------Star Pattern----------\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "----------Number Pattern >> number === line ----------\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
    }
    cout << "----------Character Pattern----------\n";
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << "\n";
    }
}