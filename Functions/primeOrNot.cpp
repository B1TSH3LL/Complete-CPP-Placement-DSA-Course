#include <iostream>

using namespace std;

bool primeNumber(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    cout << "Enter The Number : ";
    cin >> num;
    if (primeNumber(num))
    {
        cout << "It's A Prime Number.";
    }
    else
    {
        cout << "It's Not A Prime Number.";
    }

    return 0;
}