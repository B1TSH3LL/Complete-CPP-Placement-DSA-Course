#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int i, n;
    int a = 0, b = 1;
    cout << "Enter The Value Of N : ";
    cin >> n;

    cout << a << " " << b << " ";
    for (i = 1; i < +n; i++)
    {
        int sum = a + b;
        cout << sum << " ";

        a = b;
        b = sum;
    }

    return 0;
}