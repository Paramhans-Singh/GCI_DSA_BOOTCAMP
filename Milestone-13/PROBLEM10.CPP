#include<stdio.h>
int findFactorial(int);

int main()
{
  int n1,f;
  printf(" Input  a number : ");
  scanf("%d",&n1);
  f=findFactorial(n1);
  printf(" The Factorial of %d is : %d\n",n1,f);
  return 0;
}

int findFactorial(int n)
{
   if(n==1)
       return 1;
   else
       return(n*findFactorial(n-1));
 }