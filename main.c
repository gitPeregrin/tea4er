// одномерный массив с выводом в таблицу

#include <stdio.h>

int main(void){

    int string = 10;
    int column = 12;

    int arrSize = string*column+11;

    char arr[arrSize];
    int k = 10;

    for (int i=0; i<arrSize; i++){
        if (k == i) {
            arr[i] = '\n';
            k=k+11;
        } else arr[i] = '*';
       // printf ("%d,%d \n", k, i);
    }
    arr[arrSize] = '\0';
    printf ("%s", arr);

    return 0;
}
