#include<stdio.h>
#define n 5
main()
{
    int tab[n];
    int t1[n];
    int t2[n],i,j,cpt1,cpt2;
    for(i=0;i<n;i++)
    {
        puts("entrer une valeur");
        scanf("%d",&tab[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",tab[i]);
    }
for(i=0;i<n;i++)
{
    if(tab[i]%2!=0)
       {
     t1[cpt1]=tab[i];
        cpt1++;
        }
        for(j=0;j<=tab[i];j++)
        {
            if(j*j==tab[i])
            {
               t2[cpt2]=tab[i];
                cpt2++;break;
            }
            else
            {
                if(j*j>tab[i])
                    break;
            }
        }
}
puts("les donnes du tableaux sont");
for(i=0;i<n;i++)
{
    printf("%d\t",tab[i]);
}
        puts("les nombres impair sont");
        for (cpt1=0;cpt1<n;cpt1++)
        {
         printf("%d\n",t2[cpt1]);
        }
        puts("les nombres parfait sont");
        for(cpt2=0;cpt2<n;cpt2++)
        {
            printf("%d\n",t2[cpt2]);
        }
}
