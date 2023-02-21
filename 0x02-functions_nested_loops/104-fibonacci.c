#include <stdio.h>

void print_fibonacci(int n) {
    int first = 1, second = 2, i, next;
    printf("%d, %d, ", first, second);
    for (i = 3; i <= n; i++) {
        next = first + second;
        printf("%d", next);
        if (i != n) {
            printf(", ");
        }
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    print_fibonacci(98);
    return 0;
}

