#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printInBinary(int n) {
    if(n <= 1) 
        printf("%d", n);
    else {
        printInBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    printInBinary(12);
    printf("\n");
    return 0;
}