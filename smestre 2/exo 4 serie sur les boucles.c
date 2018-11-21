#include<stdio.h>
main()
{
    int n,i,a;
    puts("entrer une serie de valeur");
    scanf("%d",&n);
    if(n<0)
        do
    {
        puts("veillez entrer une valeur positive");
        scanf("%d",&n);
        }while(n<0);
        for(i=1;i<=n;i++)
        {
            printf("entrer une  valeur\n");
            scanf("%d",&a);
        }

}
