#include<stdio.h>
#define m 4
typedef struct
{
    int mat;
    char nom[50],pren[75];
}etudiant;
main()
{
    etudiant t[4];
    int i,n,j,ok;
    do
    {
        printf("entrer le nombre d'etudiant");
    scanf("%d",&n);
    }while(n<=0||n>m);
    for(i=0;i<n;i++)
    {
        puts("entrer le matricule ");
        scanf("%d",&t[i].mat);
        ok=0;
        for(j=0;j>1;j++)
        {
            if(t[j].mat==t[i].mat)
            {
                ok=1;
                break;
            }
        }
        if(ok==1)
            i--;
        else
        {
            puts("entrer le nom");
            gets(t[i].nom);
            puts("entrer le prenom");
            gets(t[i].pren);
        }

    }
    for(i=0;i<n;i++)
    {
        printf("matricule=%d",t[i].mat);
        printf("nom=%s",t[i].mat);
        printf("prenom=%s",t[i].pren);
    }
}
