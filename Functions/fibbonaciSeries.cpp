// Fibonaaci Series Using Functions.

#include <iostream>

using namespace std;

int fibbonaci(int n)
{
    int i;
    int a = 0, b = 1;

    cout << a << " " << b << " ";
    for (i = 1; i < +n; i++)
    {
        int sum = a + b;
        cout << sum << " ";

        a = b;
        b = sum;
    }
}

int main()
{
    int n;
    cout << "Enter The Value Of n : ";
    cin >> n;

    int ans = fibbonaci(n);
    cout << ans;

    return 0;
}