// Sum of even numbers using continue.

//ATUL_KUMAR_ERP_10332

#include <stdio.h>

int main() {

    int n;
    printf("enter a number:");
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

// enter a number:5
// Sum of even numbers = 6
// PS C:\Users\DELL\OneDrive\Desktop\c assigment\practical_6> 
