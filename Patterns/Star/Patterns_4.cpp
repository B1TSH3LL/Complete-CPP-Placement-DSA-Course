//       *
//     * *
//   * * *
// * * * *

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
        int space = n - i;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}