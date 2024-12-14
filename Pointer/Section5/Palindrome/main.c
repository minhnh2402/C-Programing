#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int isArrPalindrome(int *arr, int *head, int *tail, int size) {  
    if(arr[*head] != arr[*tail])
        return 0;
    if (*head == size/2 - 1) 
        return 1;
    *head = *head + 1; 
    *tail = *tail - 1;
    isArrPalindrome(arr, head, tail, size);
}

int s_isArrPalindrome(int *arr, int size) {  
    if(size <= 1)
        return 1;
    int temp = size - 1;
    if(arr[0] != arr[size - 1])
        return 0;
    else
        return s_isArrPalindrome(arr + 1, size - 2);
}

int main()
{
    int arr[] = {9,8,7,88,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int head = 0, tail = size - 1;

    //int result = isArrPalindrome(arr, &head, &tail, size);
    int result = s_isArrPalindrome(arr, size);
    printf("%d\n", result);
    return 0;
}