/// nCr = fact(n) / fact(r) * fact(n-r);

#include <iostream>

using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter The Value Of N : ";
    cin >> n;
    cout << "Enter The Value Of R : ";
    cin >> r;

    int ans = nCr(n, r);
    cout << "The Answer Is : " << ans << endl;

    return 0;
}