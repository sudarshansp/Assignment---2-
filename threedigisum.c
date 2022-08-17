#include <stdio.h>
int main()
{
  int n,x,y,z,c,sum;
  printf("enter three digit no: ");
  scanf("%d",&n);
  x = n % 10;
  y = n / 10;
  z = y % 10;
  c = y / 10;
  sum = c + z + x;
  printf("user enter number is: %d an its sum is: %d",n,sum);

}
