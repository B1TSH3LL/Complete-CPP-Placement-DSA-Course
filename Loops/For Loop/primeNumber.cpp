#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int i, n;
    int sum = 0;
    cout << "Enter The Value Of N : ";
    cin >> n;

    bool isPrime = 1;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "It Is Not A Prime" << endl;
    }
    else
    {
        cout << "It Is A Prime" << endl;
    }

    return 0;
}