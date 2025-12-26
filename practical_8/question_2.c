// Swap 2 numbers using pass by reference.

//ATUL_KUMAR_ERP_10332

#include <stdio.h>

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping:\n");
    printf("x = %d, y = %d", x, y);

    return 0;
}

// Enter two numbers: 5
// 6
// After swapping:
// x = 6, y = 5
// PS C:\Users\DELL\OneDrive\Desktop\c assigment\practical_8> 
