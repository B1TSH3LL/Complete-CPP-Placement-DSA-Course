// AND , OR , NOT , XOR

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int a, b;
    cout << "Enter The Value Of A : ";
    cin >> a;
    cout << "Enter The Value Of B : ";
    cin >> b;
    cout << endl;
    cout << "The Value Of A & B : " << (a & b) << endl;
    cout << "The Value Of A & B : " << (a | b) << endl;
    cout << "The Value Of A & B : " << (~a) << endl;
    cout << "The Value Of A & B : " << (a ^ b) << endl;
    return 0;
}