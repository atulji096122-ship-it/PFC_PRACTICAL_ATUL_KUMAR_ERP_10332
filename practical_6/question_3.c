// ATM Pin authentication
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

