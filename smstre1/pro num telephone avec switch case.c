#include<stdio.h>
main()
{
    char num[10];
    puts("entrer le numero");
    gets("num");
    switch (num[1])
    {
    case '0':
        puts("expresso");
        break;
    case '7':
        puts("orange");
        break;
    case '8':
        puts("orange");
    case '6':
        puts("tigo");
        break;
    }
}
