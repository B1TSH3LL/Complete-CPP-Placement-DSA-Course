#include <iostream>

using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    system("cls");
    int key;
    int arr[100];
    int size;

    cout << "Enter The Size of Array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter The Element To Find : ";
    cin >> key;

    int found = linearSearch(arr, size, key);
    if (found)
    {
        cout << "Element Is Present in Array";
    }
    else
    {
        cout << "Element Is Absent in Array";
    }

    return 0;
}