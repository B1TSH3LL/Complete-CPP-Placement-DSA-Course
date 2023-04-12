// A A A
// B B B
// C C C

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
        char ch = 'A' + i - 1;
        while (j <= n)
        {
            cout << ch << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}