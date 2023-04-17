// A
// A B
// B C D
// C D E F

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int n;
    int i = 1;
    cout << "Enter the number of stars to display : ";
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}