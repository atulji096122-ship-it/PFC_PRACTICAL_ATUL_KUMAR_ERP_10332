// Write a function to prints a right angle triangle of stars of height n.

//ATUL_KUMAR_ERP_10332


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

// PS C:\Users\DELL\OneDrive\Desktop\c assigment\practical_8> cd "c:\Users\DELL\OneDrive\Desktop\c assigment\practical_8\" ; if ($?) { gcc question_3.c -o question_3 } ; if ($?) { .\question_3 }
// Enter height of triangle: 8
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// * * * * * *
// * * * * * * *
// * * * * * * * *
// PS C:\Users\DELL\OneDrive\Desktop\c assigment\practical_8> 