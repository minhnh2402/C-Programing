#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int isSpecialFloatingSorted(double *arr, int size) {
    
}

int main()
{
    int arr[] = {9,8,7,8,18,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = recursiveMaxAjacentSum(arr, size);
    printf("%d\n", result);
    return 0;
}