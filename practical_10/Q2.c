// ATUL_KUMAR_ERP-10332

// Q2. Sum of diagnol elements of 2d array.

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
    int sum=0;

    if(r==c){
        for(int i=0; i<r ; i++){
            sum=sum+arr[i][i];
        }
    printf("som of digonal elements are : %d", sum);
    }else{
        printf("sum of digonal elemnts are not possible.");
    }

    return 0;
}

//output:-(valid case)
// enter number of row :2
// enter number of cloumn :2
// enter element of [1] [1] 1
// enter element of [1] [2] 2
// enter element of [2] [1] 3
// enter element of [2] [2] 4
// som of digonal elements are : 5


//output:-(invalid case)
// enter number of row :2
// enter number of cloumn :3
// enter element of [1] [1] 1
// enter element of [1] [2] 2
// enter element of [1] [3] 4 
// enter element of [2] [1] 8
// enter element of [2] [2] 9
// enter element of [2] [3] 6
// sum of digonal elemnts are not possible.
