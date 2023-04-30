// Arithmetic Problem = 3 * n + 7;

#include <iostream>

using namespace std;
int arithmeticProblem(int n)
{
    int ap;
    ap = 3 * n + 7;
    return ap;
}

int main()
{
    int n;
    cout << "Enter The Value Of N : ";
    cin >> n;

    int ans = arithmeticProblem(n);
    cout << ans;
    return 0;
}