
#include<stdio.h>

int main()
{
  int number, remainder, product = 1;
  
  printf("\nPlease enter an integer\n");
  scanf("%d",&number);
  while(number!=0)
  {
    remainder = number%10;
    product*=remainder;
    number = number/10;
  }
  printf("\nProduct of the digits of given number = %d",product);
  return 0;
}
