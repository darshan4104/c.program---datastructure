#include <stdio.h>
int arr[4] = {1, 2, 3, 4};
int main() {
int pos = 2, value = 10;
for (int i = 4; i >= pos; i--) {
  arr[i+1] = arr[i];
}
arr[pos] = value;
printf("Array after insertion: ");
for (int i = 0; i < 5; i++) {
  printf("%d ", arr[i]);
  }
}
