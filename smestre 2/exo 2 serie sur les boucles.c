#include<stdio.h>
main()
{
    int n,i,cpt,som;
    float moy;
puts("entrer un nombre entier positif");
    scanf("%d",&n);
     if(n<=0)
    do
    {
        puts("entrer une valeur positif");
        scanf("%d",&n);
    }while(n<=0);//while(n<1);
    cpt=0;
    som=0;
    for(i=1;i<=n;i++)
{
    if( i%2==0)
       {
        som=som+i;
        cpt=cpt+1;
       }
}
if(cpt!=0)

{
   moy=som/cpt;
   printf("la moyenne des nombres paires est %0.0f\n",moy);
}
 else
 {
     printf("impossible");
 }
}
