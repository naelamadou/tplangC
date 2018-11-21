#include<stdio.h>
main()
{
    int n,i,j,cpt,k=2;
    do
    {
        puts("entrer un nombre positf");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=n;  )
    {
        cpt=0;
        for(j=1; j<=k;j++)
        {
            if(k%j==0)
             cpt++;
             if(cpt==2)
             {
                 printf("%d sont les n premier nombre",k);
                 i++;
             }
             k++;
        }
    }
}
