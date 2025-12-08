#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    long long a = 0, b = 1;
    printf("Fibonacci sequence (%d terms):\n", n);
    for (int i = 1; i <= n; ++i) {
        printf("%lld", a);
        if (i < n) printf(" ");
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}