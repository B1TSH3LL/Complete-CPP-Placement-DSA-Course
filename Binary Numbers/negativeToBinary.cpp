// Convert Negative Numbers To Binary.
// Find 2's Compliment - Hint

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

    if (n >= 0)
    {
        while (n != 0)
        {
            int bits = n & 1;
            ans = (bits * pow(10, i)) + ans;
            n = n >> 1;
            i++;
        }
    }
    else
    {
        // calculate two's complement
        n = abs(n);
        while (n != 0)
        {
            int bits = n & 1;
            ans = (bits * pow(10, i)) + ans;
            n = n >> 1;
            i++;
        }
        ans = ans + pow(10, i); // add the sign bit
    }

    cout << ans << endl;
    return 0;
}
