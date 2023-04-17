// * * * *
// * * *
// * *
// *

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
        int j = i;
        while (j <= n)
        {
            cout << "* ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}