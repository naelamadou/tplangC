#include<stdio.h>
main()
{
    char num [10];
    puts("entrer le numero");
    gets("num");
    if(num[1]=='7'||num[1]=='8')
        puts("orange");
    if(num[1]=='6')
        puts("tigo");
    if(num[1]=='0')
        puts("expresso");
}
