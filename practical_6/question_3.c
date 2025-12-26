// ATM Pin authentication

//ATUL_KUMAR_ERP_10332

#include <stdio.h>
int main() {
    int pin = 1234;
    int enteredPin;
    printf("Enter your ATM PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin) {
        printf("Access Granted. Welcome!\n");
    } else {
        printf("Incorrect PIN. Access Denied!\n");
    }
    return 0;
}

// Enter your ATM PIN: 1234
// Access Granted. Welcome!
// PS C:\Users\DELL\OneDrive\Desktop\c assigment\practical_6> 

