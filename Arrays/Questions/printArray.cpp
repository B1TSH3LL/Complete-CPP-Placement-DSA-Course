// Using Functon.

#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printung The Array ......" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {0}, size = 5;
    printArray(arr, size);

    return 0;
}