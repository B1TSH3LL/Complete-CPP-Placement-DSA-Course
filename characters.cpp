// lowercase uppercase integer

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    char ch;

    cout << "Enter The Value of Character : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "LOWERCASE!";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "UPPERCASE!";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "INTEGER!";
    }
    else
    {
        cout << "INVALID!";
    }

    return 0;
}