#include<stdio.h>
#include<myconio.h>
int main()
{
    textcolor(6);
int annee,jour,mois;
printf("Entrer l'annee de naissance: ");
scanf("%d",&annee);
do{
if(annee<=0){
printf("Veuillez ressaisir l'annee de naissance: ");
scanf("%d",&annee);
}
}while(annee<=0);
printf("Entrer le mois de naissance: ");
scanf("%d",&mois);
if(mois<=0 || mois>12){
do{
printf("Veuillez ressaisir le mois: ");
scanf("%d",&mois);
}while(mois<=0 || mois>13);
}
if(annee%4==0 && annee%100!=0 || annee%400==0){
	if(mois==1 || mois==3 || mois==4|| mois==5 || mois==6 || mois==7 || mois==8 || mois==12){
	jour=31;
	printf("Au %deme mois de %d on a %djours",mois,annee,jour);
	}
		else if(mois==2){
				jour=29;
				printf("Au %deme mois de %d on a %djours",mois,annee,jour);
		}
			else{
					jour=30;
			printf("Au %deme mois de %d on a %djours",mois,annee,jour);

			}
}
if(annee%4!=0){
	if(mois==1 || mois==3 || mois==5 || mois==7 || mois==8 || mois==10 || mois==12){
	jour=31;
	printf("Au %deme mois de %d on a %djours",mois,annee,jour);
	}
		else if(mois==2){
				jour=28;
				printf("Au %deme mois de %d on a %djours",mois,annee,jour);
		}

			else{
					jour=30;
			printf("Au %deme mois de %d on a %djours",mois,annee,jour);

			}
}


return 0;
getch();
}
