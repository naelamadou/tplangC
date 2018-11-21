#include<stdio.h>
#include<conio.h>
main()
{
  int annee,mois,jours;
printf("entrer l'annee:");
scanf("%d",&annee);
  if(annee%4==0&&annee%100!=0||annee%400==0)
  {
     puts("l'annee est bisextile");
  }
  else
  {
     puts("l'annee est normal");
  }
printf("entrer le mois:");
  scanf("%d",&mois);
if(mois<=0 || mois>12){
do{
printf("Veuillez ressaisir le mois: ");
scanf("%d",&mois);
}while(mois<=0 || mois>13);
}

  getch();
}




