// Swap the next elements with previous one in an array
// e.g if i/p ----> {1,2,3,4}
// o/p ----> {2,1,4,3}

#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternative(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
        }
}

int main()
{
    system("cls");
    int arr1[100] = {1, 2, 3, 4};
    int arr2[100] = {1, 2, 3, 4, 5};

    swapAlternative(arr1, 4);
    printArray(arr1, 4);
    cout << endl;
    swapAlternative(arr2, 5);
    printArray(arr2, 5);

    return 0;
}