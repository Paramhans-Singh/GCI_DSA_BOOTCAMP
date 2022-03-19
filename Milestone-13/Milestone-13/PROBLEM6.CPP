#include <stdio.h>
 
int DigitSum(int num);
 
int main()
{
    int n1, sum;
	printf(" Input any number to find sum of digits: ");
    scanf("%d", &n1);
     
    sum = DigitSum(n1);
     
    printf(" The Sum of digits of %d = %d\n", n1, sum);
     
    return 0;
}

int DigitSum(int n1)
{
    if(n1 == 0)
        return 0;
         
    return ((n1 % 10) + DigitSum(n1 / 10));
}