#include <stdio.h>

int main(void) {
    int i, n = 50;
    int fib[n];
    
    fib[0] = 1;
    fib[1] = 2;
    
    printf("%d, %d", fib[0], fib[1]);

    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf(", %d", fib[i]);
    }

    printf("\n");
    return 0;
}

