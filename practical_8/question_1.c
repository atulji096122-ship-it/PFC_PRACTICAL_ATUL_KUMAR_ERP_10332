// 1. Write Function sumOfDigits that take n as input and return sum of its digits 
//        Eg n = 4123  output = 10

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
