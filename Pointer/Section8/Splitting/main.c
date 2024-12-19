#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void splittingOddAndEven(int *srcArr, int **oddArr, int **evenArr, int size, int *oddSize, int *evenSize) {
    int cnt_oddArr = 0, cnt_evenArr = 0, j = 0, k = 0;
    for(int i = 0; i < size; i++) {
        if (0 == srcArr[i] % 2)
            cnt_evenArr++;
        else 
            cnt_oddArr++;
    }
    *evenArr = (int *)malloc(cnt_evenArr * sizeof(int));
    *oddArr = (int *)malloc(cnt_oddArr * sizeof(int));
    if(!(*evenArr) || (!*oddArr)) {
        printf("Allocate for even or odd array failed !!! \n");
        exit(0);
    }

    for(int i = 0; i < size; i++) {
        if (0 == srcArr[i] % 2) {
            (*evenArr)[j] = srcArr[i];
            j++;
        }
        else {
            (*oddArr)[k] = srcArr[i];
            k++;
        }
    }
    *oddSize = cnt_oddArr;
    *evenSize = cnt_evenArr;
}

void displayArr(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int srcArr[] = {1, 4, 5, 8, 9, 2, 8, 2, 4};
    int *oddArr = NULL;
    int *evenArr = NULL;
    int oddSize = 0, evenSize = 0;
    int size = sizeof(srcArr)/sizeof(srcArr[0]);
    splittingOddAndEven(srcArr, &oddArr,  &evenArr, size, &oddSize, &evenSize);
    displayArr(oddArr, oddSize);
    displayArr(evenArr, evenSize);

    return 0;
}