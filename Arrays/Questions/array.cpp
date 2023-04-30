// Task - Initialize the array with 0;

#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[n];
    int value;

    cout << "Enter The Size Of Array : ";
    cin >> n;

    cout << "Enter The Value To Be Same For Every Element Of array : ";
    cin >> value;

    for (int i = 0; i < n; i++)
    {
        arr[i] = value; // Assigning the value to each element
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}