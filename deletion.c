#include <stdio.h>
int arr[4] = {1, 2, 3, 4};
int main() {
int pos = 2;
for (int i = pos; i<5; i++) {
  arr[i] = arr[i+1];
}
arr[pos] = 4;
printf("Array after deletion: ");
for (int i = 0; i < 5; i++) {
  printf("%d ", arr[i]);
  }
}
