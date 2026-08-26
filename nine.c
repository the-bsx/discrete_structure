//  WAP to find greatest and lowest number in an array.

#include<stdio.h>

int main() {
    int n;
    printf("Enter size of array:\t");
    scanf("%d", &n);
    int arr[n], i;

    printf("Enter %d array elements\n",n );
    for( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max  = arr[0], min = arr[0];
    for(i = 0; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Maximum value: %d\t Minimum value: %d", max, min);

    return 0;

}