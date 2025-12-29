// ATUL_KUMAR_ERP-10332

// Q1.Max and min element in 2D array
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

    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0 ; i<r ; i++){
        for(int j=0; j<c ; j++){
            if(max < arr[i][j]){
                max= arr[i][j];
            }
            if(min > arr[i][j]){
                min= arr[i][j];
            }
        }
    }
    printf("Max element of 2d array is :%d\n", max);
    printf("Min element of 2d array is :%d\n", min);

    return 0;
}

// enter number of row :2
// enter number of cloumn :2
// enter element of [1] [1] 1
// enter element of [1] [2] 2
// enter element of [2] [1] 3
// enter element of [2] [2] 4
// Max element of 2d array is :4
// Min element of 2d array is :1


