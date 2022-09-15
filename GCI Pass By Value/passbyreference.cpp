#include <iostream>
using namespace std;

void passbyreference(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int x = 4, y = 6;
    cout << "the value of x before swapping is :" << x<<endl;
    cout << "the value of y before swapping is :" << y<<endl;
    passbyreference(x, y);

    cout << "the value of x  after swapping is:" << x<<endl;
    cout << "the value of y  after swapping is:" << y<<endl;

    return 0;
}