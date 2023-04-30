// Find Min & Max Values In An Array Using function.

#include <iostream>

using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        // or

        // max = max(max, arr[i])   ---> It does the same thing as above.
    }

    return max;
}

int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        // or

        // min = min(min, arr[i])   ---> It does the same thing as above.
    }

    return min;
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

    cout << "The Maximum Element Of An Array : " << getMax(num, size) << endl;
    cout << "The Minimum Element Of An Array : " << getMin(num, size) << endl;
    return 0;
}