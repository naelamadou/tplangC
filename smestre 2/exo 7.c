#include<stdio.h>
main()
{
    int  n,i,som=0;
    do
    {
        puts("entrer un nombre positive");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            som=som+i;
    }
    if(som==n)
    {
        printf("%d est un nombre parfait\n",n);
    }
    else
    {
        printf("%d n'est pas un nombre parfait",n);
    }
}
