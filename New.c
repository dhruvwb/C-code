// #include <stdio.h>

// int main()
// {
//     int a[5] = {5, 1, 15, 20, 25};
//     int i, j, m;

//     i = ++a[1];
//     j = a[1]++;
//     m = a[i++];

//     printf("%d %d %d", i, j, m);
//     return 0;
// }


#include<stdio.h>

int main(){
    int arr[3][3] = {
        {1,2,3},
        {3,4,5},
        {4,5,6}
    };
    int i , j , k=0,sum[3][3];

    int arr2[3][3] = {
        {1,5,3},
        {1,2,5},
        {2,2,6}
    };
            // while(k<3){

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j] =0;
            for(k=0;k<3;k++){
               sum[i][j] += arr[i][k] * arr2[k][j];  
            //    k+1;
            //    printf("THis");
            }
        }
        
    }
    printf("The Multiplication of the matrix is:\n");
         for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t" , sum[i][j]);
        }
            printf("\n");
         }
}