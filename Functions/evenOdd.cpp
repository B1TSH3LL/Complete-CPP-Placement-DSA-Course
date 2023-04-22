#include <iostream>

using namespace std;

bool isEven(int n)
{
    if (n & 1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int num;
    cout << "Enter The Number : ";
    cin >> num;
    if (isEven(num))
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}