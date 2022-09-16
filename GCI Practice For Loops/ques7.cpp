#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << "enter the number:";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout<<"the sum of natural even number is:"<<sum;
    return 0;
}