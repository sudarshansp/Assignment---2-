#include <stdio.h>
int main()
{
  int n,digit;
  printf("enter a number: ");
  scanf("%d",&n);
  digit = n % 10;
  printf("user enter no is: %d and its unit digit is: %d",n,digit);
}
