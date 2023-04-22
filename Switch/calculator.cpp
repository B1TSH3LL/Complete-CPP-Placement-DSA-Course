#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int a, b;
    char op;

    cout << "Enter The Value Of A : ";
    cin >> a;

    cout << "Enter The Value Of B : ";
    cin >> b;

    cout << "Enter The Operator : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The Addition Of A + B is : " << a + b << endl;
        break;

    case '-':
        cout << "The Substraction Of A - B is : " << a - b << endl;
        break;

    case '/':
        cout << "The Division Of A / B is : " << a / b << endl;
        break;

    case '*':
        cout << "The Multiplication Of A * B is : " << a * b << endl;
        break;

    case '%':
        cout << "The Modulus Of A % B is : " << a % b << endl;
        break;
    }

    return 0;
}