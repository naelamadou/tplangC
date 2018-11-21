#include<stdio.h>
main()
{
    int  n,i,cpt,j;
    do
    {
        puts("entrer un nombre positive");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=n;i++)//les nombres au quel on doit faire le test
    {
        for(j=1;j<=i;j++)
            cpt=0;
           {
            if(i%j==0)
            cpt++;
           }
        if(cpt==2)
           {
            printf("%d est premier\n",i);
            }
    }

}
