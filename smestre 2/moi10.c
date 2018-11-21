#include<stdio.h>
#define n 2
typedef struct
{
    char nom[25],prenom[25];
}etudiant;
etudiant e;
main()
{
int t[n],i;
for(i=0;i<=n;i++)
{
    printf("entrer le nom de l'etudant %d \n",i+1);
    scanf("%s",&e.nom);
    printf("%s",e.nom);
}
}
