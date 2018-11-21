# include<stdio.h>
#include<stdlib.h>
#include<myconio.h>
typedef enum
{
    APR,PDS,REWMI
}
code;
typedef struct
{
    char nom_parti[6],nom_pres[16];
    int nb_siege,so;float po;code vote;
}
parti;
main()
{int i,n,vote_nul=0,sve;float pbn;
    parti p;parti p1={"APR","Macky Sall",0,0,0,0} ;parti p2={"PDS","Abdoulaye Wad",0,0,0,1};
    parti p3={"REWMI","Idrissa Seck",0,0,0,2};
 do
 {
      printf("Entrer le nombre de votant\t");
    scanf("%d",&n);
 }
   while(n<=0);
    puts(" ");
    puts("P1:APR,code = 0.\tP2:PDS,code=1.\tP3:REWMI,code=2\n");
    for(i=1;i<=n;i++)
    {
        printf("Entrer le code du parti soutenu\t\t");
        scanf("%d",&p.vote);
        switch(p.vote)
        {
        case 0:
            p1.so++;break;
        case 1:
            p2.so++;break;
        case 2:
            p3.so++;break;
            default :
            {
                vote_nul++;
            }
        }
    }
sve=p1.so+p2.so+p3.so;
system("cls");

    printf("\nSuffrage valablement exprime est = %d\t",sve);
   printf("nombre de vote nul = %d\n",vote_nul);
   pbn=vote_nul*100/n;
   printf("Pourcentage des bulletins nuls = %0.1f%%\n\n",pbn);

 p1.po=p1.so*100/n;p1.nb_siege=p1.so*120/sve;
p2.po=p2.so*100/n;p2.nb_siege=p2.so*120/sve;
p3.po=p3.so*100/n;p3.nb_siege=p3.so*120/sve;

    printf("Nom parti P1 : %s     President : %s   Code: %d.\n",p1.nom_parti,p1.nom_pres,p1.vote);
   printf("Soufrage obtenu = %d            Pourcentage = %0.1f%%\n",p1.so,p1.po);
     printf("nombre de siege obtenu = %d sieges.\n\n\n",p1.nb_siege);

printf("Nom parti P2: %s     President : %s   Code: %d.\n",p2.nom_parti,p2.nom_pres,p2.vote);
 printf("Soufrage obtenu = %d            Pourcentage = %0.1f%%\n",p2.so,p2.po);
  printf("nombre de siege obtenu = %d sieges.\n\n\n",p2.nb_siege);

    printf("Nom parti P3: %s     President : %s   Code: %d.\n",p3.nom_parti,p3.nom_pres,p3.vote);
     printf("Soufrage obtenu = %d            Pourcentage = %0.1f%%\n",p3.so,p3.po);
    printf("nombre de siege obtenu = %d sieges.\n\n\n",p3.nb_siege);

     if(p1.so>p2.so&&p1.so>p3.so)
     {
           textcolor(10);
         printf("Le parti gagnant les elections est le parti P1: ");
         printf("(%s,%s,%d)\n\n\n",p1.nom_parti,p1.nom_pres,p1.vote);
           textcolor(7);
     }
     else
     {
         if(p2.so>p1.so&&p2.so>p3.so)
         {
             textcolor(10);
             printf("Le parti gagnant les elections est le parti P2: ");
         printf("(%s,%s,%d)\n\n\n",p2.nom_parti,p2.nom_pres,p2.vote);
         textcolor(7);
         }
         else
         {
              if(p3.so>p1.so&&p3.so>p2.so)
              {
                    textcolor(10);
                   printf("Le parti gagnant les elections est le parti P3: ");
         printf("(%s,%s,%d)\n\n\n",p3.nom_parti,p3.nom_pres,p3.vote);
           textcolor(7);
              }
              else
              {
                    textcolor(10);printf("Pas de parti gagnant officiel sur ces elections\n");textcolor(7);
              }
        }
              }}

