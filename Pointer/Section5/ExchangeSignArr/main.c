#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int isArrAlternatingSign(int *arr, int size) {   
    if(size%2 == 1) {
        if(size == 1) {
            printf("%d %d\n", *arr, *(arr + 1));
            if((*arr) * (*(arr + 1)) < 0)
                return 1;
            else
                return 0; 
        }
        if(arr[0]*arr[size - 1] < 0)
            return 0;
    }
    else {
        if(size == 0)
            return 1;
        if(arr[0]*arr[size - 1] > 0)
            return 0;

    }
    
    return isArrAlternatingSign(arr + 1, size - 2);
}

int s_isArrAlternatingSign(int *arr, int size) {
    if (size == 1) 
        return 1;
    if(arr[0] * arr[1] >= 0) 
        return 0;
    return s_isArrAlternatingSign(arr + 1, size - 1);
}

int main()
{
    int arr[] = {-1,2,-4, -5, -6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int head = 0, tail = size - 1;

    //int result = isArrPalindrome(arr, &head, &tail, size);
    int result = isArrAlternatingSign(arr, size);
    printf("%d\n", result);
    return 0;
}