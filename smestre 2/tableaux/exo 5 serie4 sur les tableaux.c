#include<stdio.h>
#define n 5
main()
{
int t[n],i,val,dval;
for(i=0;i<n-2;i++)
{
    puts("entrer les valeurs du tableaux");
    scanf("%d",&t[i]);
    }
for(i=n-3;i<=n-1;i++)
{
    puts("entrer les valeurs val et dval");
    scanf("%d%d",&val,&dval);
}

//affochage des donner du tableaux avant traitement
    for(i=0;i<n;i++)
{
    printf("%d%d%d",t[i],val,dval);
}

}
