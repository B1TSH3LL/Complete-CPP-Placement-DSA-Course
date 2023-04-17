#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter nunber of left shift : ";
    cin >> i;
    int leftShift = n << i;
    cout << "The Left Shift Answer is : " << leftShift << endl;

    return 0;
}