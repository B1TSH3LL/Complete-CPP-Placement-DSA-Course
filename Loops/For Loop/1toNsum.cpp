// Write an program to print sum of numbers from 1 to n.

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int i, n;
    int sum = 0;
    cout << "Enter The Value Of N : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The Sum Of 1 to " << n << " is : " << sum << endl;

    return 0;
}