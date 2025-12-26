// Diamond of length 2n-1.

//ATUL_KUMAR_ERP_10332

#include <stdio.h>
int main(){
    int n;
    printf("Enter length of diamond:");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1 ; k<=2*i-1 ; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n ; i>=1 ; i--){
        for(int j=1 ; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1 ; k<=2*i-1 ; k++){
            printf("*");
        }
        printf("\n");
    }
}

// Enter length of diamond:5
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
// PS C:\Users\DELL\OneDrive\Desktop\c assigment\practical_7> 