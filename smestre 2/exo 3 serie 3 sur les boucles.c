#include<stdio.h>
main()
{
    int n,i,cpt=0,som1=0,som2=0;
    float moy;
puts("entrer un nombre entier positif");
    scanf("%d",&n);
     if(n<=0)
    do
    {
        puts("entrer une valeur positif");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=2*n;i++)
    {
        if(i%2==0)
       som1=som1+i;
       else
       {
           som2=som2+i;
           cpt=cpt+1;
           moy=som2/cpt;
       }
    }
    printf("la somme des %d premier nombres paires est %d\n",n,som1);
    printf("la moyenne des %d premier nombres impaires est %f\n",n,moy);
}
