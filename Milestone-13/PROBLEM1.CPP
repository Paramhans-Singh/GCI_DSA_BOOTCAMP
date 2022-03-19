#include <stdio.h>
int num(int);
int main()
{
    int n = 1;
    printf(" The natural numbers are :");
    num(n);
    return 0;
}
int num(int n)
{
    if (n <= 50)
    {
        printf(" %d ", n);
        num(n + 1);
    }
}