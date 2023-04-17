// A
// B C
// D E F
// G H I J

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int n;
    int i = 1;
    char ch = 'A';
    cout << "Enter the number of stars to display : ";
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}