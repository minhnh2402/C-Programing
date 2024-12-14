#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int maxAdjacentSum(int *arr, int size) {  
    int secondMaxEle = 0, maxEle = 1;
    if(arr[secondMaxEle] > arr[maxEle]) {
        secondMaxEle = 1;
        maxEle = 0;
    }

    for(int i = 2; i < size; i++) {
        if(arr[maxEle] < arr[i]) {
            secondMaxEle = maxEle;
            maxEle = i;
        }
        
        else {
            if(arr[secondMaxEle] < arr[i])
                secondMaxEle = i;
        }
    }

    return arr[secondMaxEle] + arr[maxEle];
}

int recursiveMaxAjacentSum(int *arr, int size) {
    int curSum = 0, maxSum = 0;
    if(size == 2) 
        return arr[0] + arr[1];
    
    curSum = arr[0] + arr[1];
    maxSum = recursiveMaxAjacentSum(arr + 1, size - 1);
    if(maxSum > curSum)
        return maxSum;
    else 
        return curSum;
}

int main()
{
    int arr[] = {9,8,7,8,18,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = recursiveMaxAjacentSum(arr, size);
    printf("%d\n", result);
    return 0;
}