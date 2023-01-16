// Bigger number b/w 2 numbers

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int a, b;
    std::cout << "Enter The Value Of A & B : ";
    cin >> a >> b;
    // std::cout << "Entered Value Of A & B is : " << a << " " << b << std::endl;
    if (a > b)
    {
        std::cout << "A is greater than B" << endl;
    }
    else
    {
        std::cout << "B is greater than A" << endl;
    }
    return 0;
}