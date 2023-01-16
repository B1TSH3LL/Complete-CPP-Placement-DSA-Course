// positive negative zero

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int a;
    cout << "Enter the value of a : ";
    cin >> a;

    if (a > 0)
    {
        cout << "A is an positive integer! (+ve)";
    }
    else if (a < 0)
    {
        cout << "A is an negative integer! (-ve)";
    }
    else
    {
        cout << "A is an zero integer!";
    }
    return 0;
}