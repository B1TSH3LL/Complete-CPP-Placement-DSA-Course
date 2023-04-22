#include <iostream>

using namespace std;

int main()
{
    int n = 3;

    switch (n)
    {
    case 0:
        cout << "Zero" << endl;
        break;

    case 1:
        cout << "One" << endl;
        break;

    case 2:
        cout << "Two" << endl;
        break;

    case 3:
        cout << "Three" << endl;
        break;

    default:
        cout << "Default Case";
    }
    return 0;
}