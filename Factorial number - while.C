#include <stdio.h>
int main(){
  int n,factorial=1;
  printf("Enter a positive integer: ");
  scanf("%d",&n);
  int i = n;
  if (n >= 0) {
    while (i > 0){
    factorial *= i;
    }
    printf("factorial of %d =%d\n", n, factorial);
  } else {
      printf("factroial is not defined for negative numbers.\n");
  }
  return 0;
  }
