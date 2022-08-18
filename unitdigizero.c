#include <stdio.h>
int main()
{
  int n;
  int a,b,c,d,x,y,z;
  printf("Enter a Four Digit no: ");
  scanf("%d",&n);
  a = n % 10;
  b = n / 10;
  c = b % 10;
  d = b / 10;
  x = d % 10;
  y = d / 10;
  z = a - a;
  printf("Answer is: %d%d%d%d",y,x,c,z);
}
