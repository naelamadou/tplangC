#include<stdio.h>
#define n 2
#define m 2
#define t 2
typedef struct
{
    char nom[25];
    int prix;
}Article;
Article A;
typedef struct
{
int date;
char nom_cli[25];
char tab_art[n];
int tab_qte[m];
}Vente;
Vente V;
main()
{
    int i,j;
    int tab_vente[t];
      printf("enter le nom de l'article:");
      gets(A.nom);
      fflush(stdin);
      puts("enter le prix de l'article");
      scanf("%d",&A.prix);
                  for(i=0;i<t;i++)
                    {
                        puts("entrer la date de vente:");
                        scanf("%d",&tab_vente[i]V.date);
                          fflush(stdin);
                        printf("entrer le nom du client:");
                        gets(V.nom_cli);
                          fflush(stdin);
                            for(j=0;j<m;j++)
                                  {
                                     puts("entrer les articles");

                                  }

                    }

}
