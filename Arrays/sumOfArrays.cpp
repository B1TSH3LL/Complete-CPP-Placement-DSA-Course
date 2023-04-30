// Sum Of All Elements Of An Array.

#include <iostream>

using namespace std;

int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    system("cls");
    int num[100];
    int size;

    cout << "Enter The Size Of An Array : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Sum Is : " << arraySum(num, size);

    return 0;
}