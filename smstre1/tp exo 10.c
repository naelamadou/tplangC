#include<stdio.h>
int main()
{
const float tva=floor 0.18;
int pu;float mhtc,mttc,qte;
char lib[20],code[25];
puts("entrer le code");
scanf("%s",&code);
fflush(stdin);
puts("entrer le libelle");
gets(lib);
printf("entrer le prix unitaire\n");
scanf("%d",&pu);
printf("donner la quantite du stock \n");
scanf("%f",&qte);
mhtc=pu*qte;
mttc=mhtc*(1+tva);
printf("la montant mhtct est%f\n\n le montant", mhtc);
printf("mttc est %f\n",mttc);
printf("le libelle du produit est %s \n",lib);
printf("le code est");
puts(code);
printf("le prix unitaire est %d",pu);
printf("la quantite en stock est %f",qte);
}


