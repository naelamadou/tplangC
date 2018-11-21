#include<stdio.h>
#define N 2
#define M 3
main()
{
    int mat[N][M],i,j,n,m,t[N*M],l,k;
    puts("donner la taille du tableau");
    do
    {
        scanf("%d",&n);
    }while(n<=0||n>M);
    puts("donner la second taille");
    do
    {
        scanf("%d",&m);
    }while(m<=0||m>M);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mat[i][j]%2==0)
            {
                t[k]=mat[i][j];
                k++;
            }
        }
    }
    for(l=0;l<k;l++)
        printf("%d",t[l]);
}
