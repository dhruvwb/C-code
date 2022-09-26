// Program for the transpose of the matrix
#include <stdio.h>

int main(){
    int arr[2][2][2] , i , j , k ,arr2[2][2][2] ;

    printf("Enter the elements of the Matrix \n");
        for(i=0;i<2;i++){
         for(j=0;j<2;j++){
         for(k=0;k<2;k++){
                printf("Arr[%d][%d][%d] = ",i,j,k);
                scanf("%d",&arr[i][j][k]);
    }
    }
    }
        printf("Printing the 3-d matrix \n");
     for(i=0;i<2;i++){
         for(j=0;j<2;j++){
         for(k=0;k<2;k++){
            printf("%d\t",arr[i][j][k]);
         }
         printf("\n");
         }
         printf("\n\n");
     }
    
}