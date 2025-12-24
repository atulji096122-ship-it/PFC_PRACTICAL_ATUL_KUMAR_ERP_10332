// Print numbers from a to b using loops.

#include <stdio.h>
int main(){

    int a , b ;
    scanf("%d %d", &a ,&b);
    for(int i=a; i<=b ; i++){
        printf("%d\n",i);
    }
}