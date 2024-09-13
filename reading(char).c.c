#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp = fopen("text.txt","r");
  fgets(c,5,fp);
  printf("Character is %s\n",c);
  fclose(fp);
  return 0;
}