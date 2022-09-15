#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        k = 1;
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                cout<<j;
                k++;
            }
            else
            {
                cout<<"";
            }
        }
            cout<<endl;
    }
    return 0;
} 