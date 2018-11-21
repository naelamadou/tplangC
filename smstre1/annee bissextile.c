#include<stdio.h>
main()
{
    int annee;
    puts("donner une annee:");
    scanf("%d",&annee);
    if(annee%400==0||annee%4==0&&annee%100!=0)
        printf("%d est une annee bissextile",annee);
    else
        printf("%d n'est pas une annee bissextile",annee);
}
