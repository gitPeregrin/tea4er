#include <stdio.h>

int main (){
    
    int i=0, invUs = 0;

    int inv[10]; 
    char a[10];

    for (i=0; i<=9; i++){
        inv[i] = 123+i;
        printf ("%d ", inv[i]);
    }

    printf ("Введите инвентарный номер \n");
    scanf ("%d", invUs);

    switch (invUs){
        case 123:
            printf ("ручка гелевая, синяя, 55 рублей \n");
            break;
        case 124:
            printf ("ручка шариковая, синяя, 15 рублей \n");
            break;
        case 125:
            printf ("ручка масляная, синяя, 35 рублей \n");
            break;
        case 126:
            printf ("ручка гелевая, красная, 55 рублей \n");
            break;
        case 127:
            printf ("ручка гелевая, черная, 55 рублей \n");
            break;
        case 128:
            printf ("ручка шариковая, красная, 15 рублей \n");
            break;
        case 129:
            printf ("ручка шариковая, черная, 15 рублей \n");
            break;
        case 130:
            printf ("ручка масляная, черная, 35 рублей \n");
            break;
        case 131:
            printf ("ручка масляная, красная, 35 рублей \n");
            break;
        case 132:
            printf ("ручка гелевая, зеленая, 55 рублей \n");
            break;
    }







return 0;}