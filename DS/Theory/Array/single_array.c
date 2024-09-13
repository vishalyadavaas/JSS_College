#include <stdio.h>
void main(){
    int arr[10],i,n;
    // input array
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the element of the array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // printing the array
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}