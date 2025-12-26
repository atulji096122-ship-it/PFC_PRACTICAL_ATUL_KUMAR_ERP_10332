// Print the pattern:
// A
// AB
// ABC
// ABCD

//ATUL_KUMAR_ERP_10332

#include <stdio.h>
int main(){

    for(int i=1 ; i<=4 ;i++){
        char al='A';
        for(int j=1 ; j<=i ; j++){
            printf("%c",al);
            al++;
        }printf("\n");
        
    }
}

// A
// AB
// ABC
// ABCD
// PS C:\Users\DELL\OneDrive\Desktop\c assigment\practical_7> 