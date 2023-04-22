// Calculate power of two numbers.

#include <iostream>

using namespace std;

int power()
{
    int a, b;
    cout << "Enter The Value Of A ";
    cin >> a;
    cout << "Enter The Value Of B ";
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
    }
    return ans;
}

int main()
{

    system("cls");
    int ans = power();
    cout << "Answer Is : " << ans << endl;
    return 0;
}