#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 2;

    if (a-- > 0 || ++b > 2)
    {
        cout << "Stage 1 - Inside If." << endl;
    }
    else
    {
        cout << "Stage 2 - Inside Else." << endl;
    }
    cout << a << " " << b << " " << endl;
    return 0;
}