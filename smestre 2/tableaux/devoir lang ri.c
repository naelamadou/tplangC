#include<stdio.h>
#define n 3
#define m 2
main()
{
    int mat[n][m],i,j,grd,min1,max1,pti;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("entrer la valeur %d:",j+1);
        scanf("%d",&mat[i][j]);
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
        grd=mat [i][0];
        for(j=0;j<m;j++)
        {
            if(mat[i][j]>grd)
            {
                grd=mat[i][j];
            }

        }
        printf("le nombre le plus grand est: %d\n",grd);
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
                 if(mat[i][j]>grd)
            {
                min1=grd;
            }
            else
            {
                min1=mat[i][j];
            }
        }
        printf("le plus petit est:%d\n",mat[i][j]);
    }
}
