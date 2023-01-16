#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int a = 9;

    if (a == 9)
    {
        cout << "NINE!";
    }
    else if (a < 0)
    {
        cout << "NEGATIVE!";
    }
    else
    {
        cout << "POSITIVE!";
    }
    return 0;
}