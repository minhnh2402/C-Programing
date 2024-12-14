#include <stdio.h>
#include <stdlib.h>
#include <string.h>


double findArrAverage(int *arr, int size) {
    double avgSoFar;
    if(size == 1) {
        return arr[0];
    }
    
    avgSoFar = findArrAverage(arr + 1, size - 1);
    return (avgSoFar * (size - 1) + arr[0]) / size;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    double result = findArrAverage(arr, size);


    printf("%f\n", result);
        return 0;
}