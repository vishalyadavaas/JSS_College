// Linear Search

#include <stdio.h>

int main() {
    int a[20], i, n, key;

    // input array
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    // logic of linear searching
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Element Found at %d index", i+1);
            break;
        }
    }
    if (i == n) {
        printf("Element not found in array");
    }
    return 0;
}