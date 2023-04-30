// Calculate number of set bits i.e 1

#include <iostream>

int andOpr(int a, int b)
{
    int And = a & b;
    int count = 0;
    while (And != 0)
    {
        if (And & 1)
        {
            count++;
        }
        And = And >> 1;
    }
    return count;
}

using namespace std;

int main()
{
    int a, b;
    cout << "Enter The Value Of A : ";
    cin >> a;
    cout << "Enter The Value Of B : ";
    cin >> b;

    int ans = andOpr(a, b);
    cout << "The Number Of 1 Bits in A & B is : " << ans;

    return 0;
}