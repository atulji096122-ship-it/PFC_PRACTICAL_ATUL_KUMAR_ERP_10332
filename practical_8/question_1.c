// 1. Write Function sumOfDigits that take n as input and return sum of its digits.

//ATUL_KUMAR_ERP_10332

#include <stdio.h>
int sumofDigit(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("sum of digit = %d" , sumofDigit(n));
}

int sumofDigit(int n){
    int sum = 0;
    while (n>0)
    {
        sum = sum + (n%10);
        n=n/10;
    }
        return sum;
}

// 5863
// sum of digit = 22
// PS C:\Users\DELL\OneDrive\Desktop\c assigment\practical_8> 
