#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int find2specElement(int *arr, int size, int value) {
    int l_index = 0, r_index = size - 1;
    for(int i = 0; i < size; i++) {
        if(arr[l_index] + arr[r_index] < value) {
            l_index++;
        }
        else if (arr[l_index] + arr[r_index] > value) {
            r_index--;
        }
        else {
            printf("l_index = %d, r_index = %d\n", l_index, r_index);
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    find2specElement(arr, size, 8);

    return 0;
}