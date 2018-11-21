#include<stdio.h>
#define n 3
#define m 3
main()
{
int mat[n][m],i,j,cpt,cpt1,cptmax=0,position;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            do
            {
                printf("entrer une valeur%d:",j+1);
                scanf("%d",&mat[i][j]);
            }while(!(mat[i][j]==0||mat[i][j]==1));
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",mat[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        cpt=0;
        for(j=0;j<m;j++)
        {
            if(mat[i][j]==0)
            {
                cpt++;
            }

        }
        if(cpt>cptmax)
                position=i;
    }
    printf("la ligne %d contient plus de 0\n",position);
    for(j=0;j<m;j++)
    {
        cpt1=0;
        for(i=0;i<n;i++)
        {
            if(mat[i][j]==1)
            {
                cpt1++;
            }
        }
    printf("la colonne %d a %d de   1\n",j,cpt1);
    }

}
