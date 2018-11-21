#include<stdio.h>
#define n 3
#define m 60
main()
{
    char ch[n][n][m];
    int i,j,k,cptmax=0,imax,jmax,cpt;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("entrer une chaine\n");
            scanf("%s",&ch[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            k=0;
            while(ch[i][j][k]!='\0')
            {
                k++;
                }
                if(cptmax<k)
                {
                    cptmax=k;
                    imax=i;
                    jmax=j;
                }
        }
    }
    printf("la chaine la plus longues est:");
    printf("%s",ch[imax][jmax]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            k=0,cpt=0;
            while(ch[i][j][k]!='\0')
            {
                if(ch[i][j][k]=='A'||ch[i][j][k]=='a')
                {
                    cpt++;
                }
                k++;
            }
            if(cptmax<cpt)
            {
                cptmax=cpt;
                imax=i;
                jmax=j;
            }
        }
    }
    printf("\n la chaine qui a le plus de A ou a est:%s",ch[imax][jmax]);
}

