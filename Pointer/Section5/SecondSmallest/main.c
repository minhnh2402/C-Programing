#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void findSecondSmallest(int *arr, int size) {
    int f_small = 0, s_small = 1;
    if(arr[f_small] > arr[s_small]) {
        f_small = 1;
        s_small = 0;
    }
    for(int i = 3; i < size; i++) {
        if(arr[f_small] < arr[i]) {
            if(arr[s_small] > arr[i])
                s_small = i;
        }
        else if (arr[f_small] > arr[i]) {
            s_small = f_small;
            f_small = i;
        }
    }
    printf("print second smallest element = %d", arr[s_small]);
}

int main()
{
    int arr[] = {1, 4, 5, 8, 9, 2, 8, 2, 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    findSecondSmallest(arr, size);

    return 0;
}