// Write a function to prints a right angle triangle of stars of height n.

#include <stdio.h>

void printTriangle(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter height of triangle: ");
    scanf("%d", &n);

    printTriangle(n);

    return 0;
}
