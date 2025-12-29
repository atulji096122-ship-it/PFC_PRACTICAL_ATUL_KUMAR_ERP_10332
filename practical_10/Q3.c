// ATUL_KUMAR_ERP-10332

// Q3. Row wise sum of 2d array.

#include <stdio.h>
int main(){
    int r , c;
    printf("enter number of row :");
    scanf("%d",&r);
    printf("enter number of cloumn :");
    scanf("%d",&c);

    int arr[r][c];

    for(int i=0 ; i<r ; i++){
        for(int j=0; j<c ; j++){
            printf("enter element of [%d] [%d] ", i+1 , j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    int sum;
    for(int i=0 ; i<r ; i++){
        sum=0;
        for(int j=0; j<c ; j++){
            sum=sum+arr[i][j];
        }
        printf("sum of row %d = %d\n", i , sum);
    }

    return 0;

}

//output:-
// enter number of row :3
// enter number of cloumn :2
// enter element of [1] [1] 4
// enter element of [1] [2] 58
// enter element of [2] [1] 96
// enter element of [2] [2] 47
// enter element of [3] [1] 25
// enter element of [3] [2] 36
// sum of row 0 = 62
// sum of row 1 = 143
// sum of row 2 = 61