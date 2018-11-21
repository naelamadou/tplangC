#include<stdio.h>
#define n 10
#define m 9
main()
{
    int t[n][m],i,j,cpt=0,cpt1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;i++)
        {
            printf("entrer la ligne  %d et la colonne%d",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
         for(j=0;j<m;i++)
         {
             if(t[i][j]!=0)
             {
                 if(t[i][j]<0)
                    cpt++;
             else
                 cpt1++;

         }
    }
}
printf("le nombre de valeur negatif est %d",cpt);
printf("le nombre de valeur positif est %d",cpt1);
}
