
#include <bits/stdc++.h>
using namespace std;

vector<int> factors;

void findFactors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {

            if ((n / i) == i)
                factors.push_back(i);

            else
            {
                factors.push_back(n / i);

                factors.push_back(i);
            }
        }
    }
}

int findProduct(int n)
{
    int product = -1;
    int si = factors.size();
    for (int i = 0; i < si; i++)
        for (int j = 0; j < si; j++)
            for (int k = 0; k < si; k++)
                for (int l = 0; l < si; l++)
                {

                    int s = factors[i] + factors[j] + factors[k] + factors[l];

                    if (s == n)
                    {

                        int p = factors[i] * factors[j] * factors[k] * factors[l];

                        if (p > product)
                            product = p;
                    }
                }

    return product;
}

int main()
{
    int n = 10;

    findFactors(n);

    cout << findProduct(n);

    return 0;
}
