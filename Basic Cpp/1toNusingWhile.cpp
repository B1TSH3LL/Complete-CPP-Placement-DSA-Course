//1 to n numbers using while loops.

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int i = 0, n;
    cout << "Enter The Value of N : ";
    cin >> n;

    while (i <= n)
    {
        cout << i << endl;
        i++;
        // i += 1;
    }

    return 0;
}