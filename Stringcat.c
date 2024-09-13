#include <stdio.h>
#include <string.h>
int main() {
  char str[100], str1[100];
  scanf("%S", str);
  scanf("%S", str1);
  strcat(str, str1);
  printf("%S", str);
