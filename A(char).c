#include<stdio.h>
int main() {
  FILE *fp;
  char c[100];
  fp = fopen("text.txt","w");
  fputc('T', fp);
  printf("Hello", fp);
  return 0;
}
