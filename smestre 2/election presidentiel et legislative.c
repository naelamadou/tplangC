#include<stdio.h>
#include<myconio.h>
typedef enum{APR,PDS,REWMI} code;
typedef struct
{
    char nompar[6],nompr[16];
    int so,nbsg;
    float po;
}Parti;
main()
{
    Parti P;
    code ct;
  Parti P1={"APR","MACKY SALL",0,0,0};
  Parti P2={"PDS","ABDOULAYE WADE",0,0,0};
  Parti P3={"REWMI","IDRISSA SECK",0,0,0};
  int nv,i,nvn=0,sve;
  float pbn;
 // strcpy(np1,"APR");
 do
  {
      puts("entrer le nombre de votant");
    scanf("%d",&nv);
  }while(nv<=0);
 for(i=1;i<=nv;i++)
 {
     puts("veillez votez");
 scanf("%d",&ct);
 switch(ct)
 {
     case 0:
     P1.so++;
     break;
    case 1:
    P2.so++;
    break;
   case 2:
    P3.so++;
    break;
    default:
    nvn++;
 }
    }
    sve=P1.so+P2.so+P3.so;
    system("cls");
    printf("le suffrage valablement exprime est=%d\n",sve);
    printf("le nombre de vote nule est %d\n",nvn);
    pbn=nvn*100/nv;
    printf("le pourcentage de vote nul est %0.1f%%\n ",pbn);
P1.po=P1.so*100/nv;
P1.nbsg=P1.so*120/sve;
P2.po=P2.so*100/nv;
P2.nbsg=P2.so*120/sve;
P3.po=P3.so*100/nv;
P3.nbsg=P3.so*120/sve;
printf("le suffrage obtenu pour la parti %s est %d\n",P1.nompar,P1.so);
printf("le pourcentage de la partie %s est  %0.1f%%\n",P1.nompar,P1.po);
printf("le nombre de siege de %s est %d\n",P1.nompar,P1.nbsg);
printf("le suffrage obtenue pour la parti %s est %d\n ",P2.nompar,P2.so);
printf("le pourcentage de la partie %s est  %0.1f%%\n",P2.nompar,P2.po);
printf("le nombre de siege de %s est %d\n",P2.nompar,P2.nbsg);
printf("le suffrage obtenue pour la parti %s est %d\n",P3.nompar,P3.po);
printf("le pourcentage de la partie %s est  %0.1f%%\n",P3.nompar,P3.so);
printf("le nombre de siege de %s est %d\n",P3.nompar,P3.nbsg);
if(P1.so>P2.so&&P1.so>P3.so)
   {
    textcolor(10);printf("la parti qui a gagne est %s",P1.nompar);
    }
else
    {
        if(P2.so>P1.so&&P2.so>P3.so)
          {
            textcolor(12);printf("la parti qui a gagne est %s\n",P2.nompar);
         }
         else
                  if(P3.so>P1.so&&P3.so>P2.so)
            {
             textcolor(13);printf("la parti qui a gagner est %s\n",P3.nompar);
             }
             else
             {
                 printf("il ya pas de parti gagniant");
            }
     }
}



