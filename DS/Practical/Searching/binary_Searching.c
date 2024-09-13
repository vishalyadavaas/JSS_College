#include <stdio.h>
void main(){
    int a[20],i,j,n,key,beg,end,mid,temp;

    // input array
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the element of array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    // sorting the array
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // priting the sorted array
    printf("Sorted Array : ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    // element to be searched
    printf("Enter the element to be searched : ");
    scanf("%d",&key);

    // logic of binary searching
    beg = 0;
    end = n-1;
    while(beg<=end){
        mid = (beg+end)/2;
        if(a[mid]==key){
            printf("Element Found at %d",mid+1);
            break;
        }
        else if(a[mid]<key){
            beg = mid+1;
        }
        else if(a[mid]>key){
            end = mid-1;
        }
    }
}