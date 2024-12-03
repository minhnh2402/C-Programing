#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void selectionSort(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) 
            swap(arr + i, arr + minIndex);
    }
}

void printValuesFrequency(int *arr, int size) {
    int cnt = 1, baseArr = 0;
    for(int i = 0; i < size; i++) {
        if(arr[baseArr] == arr[i + 1]) 
            cnt++;
        else {
            printf("Frequency of value %d is %d\n", arr[baseArr], cnt);
            baseArr = i + 1;
            cnt = 1;
        }    
       
    }
}

int main()
{
    int arr[] = {5, 5, 4, 4, 6, 4, 3, 2, 5, 5, 5, 4, 4, 3, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, size);
    printArr(arr, size);
    printValuesFrequency(arr, size);

    return 0;
}