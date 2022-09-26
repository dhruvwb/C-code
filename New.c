// // Program for Printing 3d array
// #include <stdio.h>

// int main(){
//     int arr[2][2][2] , i , j , k ,arr2[2][2][2] ;

//     printf("Enter the elements of the Matrix \n");
//         for(i=0;i<2;i++){
//          for(j=0;j<2;j++){
//          for(k=0;k<2;k++){
//                 printf("Arr[%d][%d][%d] = ",i,j,k);
//                 scanf("%d",&arr[i][j][k]);
//     }
//     }
//     }
//         printf("Printing the 3-d matrix \n");
//      for(i=0;i<2;i++){
//          for(j=0;j<2;j++){
//          for(k=0;k<2;k++){
//             printf("%d\t",arr[i][j][k]);
//          }
//          printf("\n");
//          }
//          printf("\n\n");
//      }
    
// }

// Program for the transpose of the matrix
#include<stdio.h>


int main(){
    int arr[3][3] , i , j , arr2[3][3];

    printf("Enter the elements of the array\n");
    for(i = 0; i < 3 ; i++){
        for(j=0;j<3;j++){
            printf("Arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing the elements of the array\n");
    for(i = 0; i < 3 ; i++){
        for(j=0;j<3;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 3 ; i++){
        for(j=0;j<3;j++){
            // arr2[i][j] = 0;
              arr2[i][j] =arr[j][i]  ;
        }
    }
    printf("Printing the Transpose of the Matrix\n");
    for(i = 0; i < 3 ; i++){
        for(j=0;j<3;j++){
            printf("%d \t",arr2[i][j]);
        }
        printf("\n");
    }
}