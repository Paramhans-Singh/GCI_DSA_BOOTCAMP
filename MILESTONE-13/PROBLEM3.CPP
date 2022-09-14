#include <stdio.h>

int term;
int fibonacci(int prNo, int num);

int main()
{
    static int prNo = 0, num = 1;
    printf(" Input number of terms for the Series (< 20) : ");
    scanf("%d", &term);
    printf(" The Series are :\n");
    printf(" 1  ");
    fibonacci(prNo, num);
    return 0;
}

int fibonacci(int prNo, int num)
{
    static int i = 1;
    int nxtNo;

    if (i == term)
        return (0);
    else
    {
        nxtNo = prNo + num;
        prNo = num;
        num = nxtNo;
        printf("%d  ", nxtNo);

        i++;
        fibonacci(prNo, num);
    }
    return (0);
}