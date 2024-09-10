#include <stdio.h>
int main() {
  int a, b;
  char oper;
  printf("enter the number 1: ");
  scanf("%d", &a);
  printf("enter the number 2: ");
  scanf("%d", &b);
  printf("enter the operation (+,-,*,/): ");
  scanf("%c", &oper);
  if (oper == '+') {
    printf("the sum is %d\n", a + b);
  } else if (oper =='-') {
    printf("the subtraction is %d\n", a - b);
  } else if (oper =='*') {
    printf("the multiplication is %d\n", a * b);
  } else if (oper == '/') {
    printf("the division is %d\n", a / b);
    if (b != 0) {
    printf("the division is %d\n", a / b);
  } else {
    printf("division by zero is not possible\n");
  }
  }
   else {
    printf("invalid operation\n");
  }
  }
