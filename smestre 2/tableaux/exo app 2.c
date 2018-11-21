#include<stdio.h>
#define n 2
#define m 3
main()
{
    int mat[n][m],i,j,som=0,prod,soml;
    float moy;
    //remplissage matrice
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("entrer la %d valeur:",j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    //affichage de la matrice
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",mat[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    //somme des elements de la matrice
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            som=som+mat[i][j];
        }
    }
    printf("la somme des element de la matrice est: %d \n",som);
    //produit des elements de chaque colonne

    for(j=0;j<m;j++)
    {
         prod=1;
        for(i=0;i<n;i++)
        {
            prod*=mat[i][j];
        }
        printf("le produit est:%d\n",prod);
    }
    //moyenne des elements de la ligne
    for(i=0;i<n;i++)
    {
        soml=0;
        for(j=0;j<m;j++)
        {
            soml+=mat[i][j];
        }
        moy=(float)soml/m;
        printf("la moyenne des elements pour chaque est %0.02f\n",moy);
    }
}
