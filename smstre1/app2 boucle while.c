#include<stdio.h>
main()
{
    int nbre;
    puts("entrer une valeur");
    scanf("%d",&nbre);
    while(nbre!=0)
    {
        printf("%d",nbre);
        puts("entrer une valeur");
        scanf("%d",&nbre);
    }
}
