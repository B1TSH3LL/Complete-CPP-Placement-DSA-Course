// an infinite loop and we need to get out of it using switch.

#include <iostream>

using namespace std;

int main()
{
    int n = 2;

    while (1)
    {
        switch (n)
        {
        case 1:
            cout << "One" << endl;
            exit(0); // It help to exit the infinite loop.
            break;

        case 2:
            cout << "Two" << endl;
            exit(0); // It help to exit the infinite loop.
            break;

        default:
            cout << "Default Case";
        }
    }
    return 0;
}