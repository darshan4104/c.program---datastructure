#include <stdio.h>
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    // Input the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are: \n", n);

    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
