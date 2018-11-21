#include<stdio.h>
#define N 4
#define M 3
main()
{
    int mat[N][M],i,j,n,m,cpt,cptp,k,somp,som;
    puts("donner la taille du tableau");
    do
    {
        scanf("%d",&n);
    }while(n<=0||n>N);
    do
    {
        scanf("%d",&m);
    }
    while(m<=0||m>M);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            puts("donner une valeur");
            scanf("%d",&mat[i][j]);
        }
    }
    //traitement valeurs prmier de chaque ligne
    for(i=0;i<n;i++)
    {
        cptp=0;//nombre  de valeurs premier sur une ligne
        for(j=0;j<m;j++)
            cpt=0;
        {
            for(k=1;k<=mat[i][j];k++)
            {
                if(mat[i][j]%k==0)
                {
                    cpt++;
                }
            }
            if(cpt==2)
            {
                cptp++;
            }
        }
        printf("le nombre de valeur premier de la ligne %d \n",i+1);
        printf("%d",cpt);
    }
    //traitement somme valeurs parfait
    for(j=0;j<m;j++)
    {
        somp=0;
        for(i=0;i<n;i++)
        {
            som=0;
            for(k=1;k<=mat[i][j]/2;k++)
            {
                if(mat[i][j]%k==0)
                {
                    som+=k;
                }
            }
            if(som==mat[i][j])
            {
                somp+=mat[i][j];
            }
        }
        printf("somp=%d\n",somp);
    }
}

