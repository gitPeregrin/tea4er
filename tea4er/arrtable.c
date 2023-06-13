// одномерный массив с выводом в таблицу

#include <stdio.h>

int main(){

    int string = 10;
    int column = 12;

    int massize = string*column+11;

    char arr[massize];
    int k = 10;

    for (int i=0; i<massize; i++){   
        if (k == i) {
            arr[i] = '\n';
            k=k+11;
        } else arr[i] = '*';
       // printf ("%d,%d \n", k, i);
    }
    arr[massize] = '\0';
    printf ("%s", arr);

    return 0;
}