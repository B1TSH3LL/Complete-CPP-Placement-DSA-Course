#include <iostream>

using namespace std;

void printCount(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
        // _sleep(1);
    }
}

int main()
{
    system("cls");
    printCount(100);
    return 0;
}