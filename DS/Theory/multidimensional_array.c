// 2d array input and printing

#include <stdio.h>  
void main(){
    int a[3][3],i,j;
    printf("Enter the elements of the array : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The array is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
