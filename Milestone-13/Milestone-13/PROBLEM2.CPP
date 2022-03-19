#include <stdio.h>

int sum(int);

int main()
{
    int n1;
    int s1;
    printf(" Input the last number of the range : ");
    scanf("%d", &n1);

    s1 = sum(n1);
    printf("\n The sum of numbers from 1 to %d : %d\n\n", n1, s1);

    return (0);
}

int sum(int n1)
{
    int res;
    if (n1 == 1)
    {
        return (1);
    }
    else
    {
        res = n1 + sum(n1 - 1);
    }
    return (res);
}