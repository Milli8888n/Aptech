//Write a program to accept 2 numbers and tell whether the product of the two
//cnumbers is equal to or greater than 1000.
#include <stdio.h>
int main(void)
{ int num1, num2, product;
  printf("Enter 2 numbers:");
  scanf("%d %d", &num1, &num2);
  product =num1 *num2;
  switch(product >= 1000)
  {
    case 1:
    printf("Product is greater than or equal to 1000");
    break;
    case 0:
    printf("Product is less than 1000");
    break;
  }
  return 0;
}