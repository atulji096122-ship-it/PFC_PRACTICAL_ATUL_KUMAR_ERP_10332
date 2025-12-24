// Sum of even numbers using continue.
#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int i, sum = 0;

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum += i;
    }
    printf("Sum of even numbers = %d", sum);
    return 0;
}

