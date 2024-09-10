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
  switch(oper) {
    case '+':
      printf("the sum is %d", a+b);
      break;
    case '-':
      printf("the subtraction is %d", a-b);
      break;
    case '*':
      printf("the multiplication is %d", a*b);
      break;
    case '/':
    if (b!= 0) {
      printf("the division is %d", a/b);
    } else {
      printf("division by zero is not allowed.\n");
    }
    break;
    default:
      printf("invalid operation.\n");
  }
  return 0;
    }
