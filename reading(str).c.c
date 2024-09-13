

#include<stdio.h>
int main(){
  FILE *fp;
  char c;
  fp = fopen("text.txt","w");
  fgetc(fp);
  printf("Character is %s\n",c);
  fclose(fp);
  return 0;
}