#include <stdio.h>
int main() {
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int key = 5, found = 0;
  for(int i = 0; i < 11; i++) {
    if(arr[i] == key) {
      found = 1;
      break;
    }
  }
  if(found == 1){
    printf("Found");
  }
  else{
    printf("Not Found");
  }
}
