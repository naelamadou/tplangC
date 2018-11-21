#include<stdio.h>
main()
{
    char car;
    printf("entrer un caractere \n");
    car=getchar();
    printf("le caractere saisi est \n");
    putchar(car);
    printf("\n le code ascii de %c est %d",car,car);
}

