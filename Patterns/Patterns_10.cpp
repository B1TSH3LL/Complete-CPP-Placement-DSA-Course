// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int n;
    int i = 1;
    int sum = 1;
    cout << "Enter the number of stars to display : ";
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << sum << " ";
            sum += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}