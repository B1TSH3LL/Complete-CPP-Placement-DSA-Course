#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter nunber of Right shift : ";
    cin >> i;
    int rightShift = n >> i;
    cout << "The Right Shift Answer is : " << rightShift << endl;

    return 0;
}