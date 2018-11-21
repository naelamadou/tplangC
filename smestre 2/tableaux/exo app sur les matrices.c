#include<stdio.h>
main()
{
    int mat[2][3]={{3,2,4},{7,8,15}},i,j;
    //affichage du tableau
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",mat[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}
