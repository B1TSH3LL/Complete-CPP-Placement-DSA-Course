// Positive And Negative Numbers

#include <iostream>

using namespace std;

int main()
{
    int a;
    system("cls");
    std::cout << "Enter The Value Of A : ";
    cin >> a;
    if (a < 0)
    {
        std::cout << "A is an Negative Number! (-ve)";
    }
    else
    {
        std::cout << "A is an Positive Number! (+ve)";
    }

    return 0;
}