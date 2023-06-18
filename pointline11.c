#include <stdio.h>
#include "pointline.c"

int main() {
    int masSize = 120*29;
    char arr[masSize];
    for (int i = 0; i<masSize; i++){
        arr[i] = '-';
    }
    arr[masSize] = '\0';

   // printf("%s", arr);
    int pointA = 3;
    int pointB = 2403;
    int pointC = 2456;

    arr[pointA] = '*';
    arr[pointB] = '*';  
    arr[pointC] = '*';

    pointline (arr, pointA, pointB);
    pointline (arr, pointA, pointC);
    pointline (arr, pointB, pointC);

    printf("%s", arr);

    return 0;
}