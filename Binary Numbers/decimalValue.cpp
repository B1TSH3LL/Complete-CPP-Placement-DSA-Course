// Find Decimal value of give binary.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    system("cls");
    int n;
    int i = 0, ans = 0;
    cout << "Enter The Value Of N : ";
    cin >> n;

    while (n != 0)
    {
        int digits = n % 10;
        if (digits == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans << endl;
    return 0;
}