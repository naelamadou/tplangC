#include<stdio.h>
main()
{
    int n,i;
    typedef struct
    {
       char dgn[20];
       int code,pu,qs,mst,mtst;
    }Produit;
    Produit P;
    puts("entrer le nombre de produits");
    scanf("%d",&n);
    while(n<=0);
    P.mtst=0;
    for(i=1 ; i<=n; i++)
    {
        printf("\t produit %d\n",i);
        puts("entrer le code du produits");
        scanf("%d",&P.code);
        puts("entrer sa designiation");
        scanf("%s",&P.dgn);
        puts("entrer son prix unitaire");
        scanf("%d",&P.pu);
        puts("entrer sa quantite en stock");
        scanf("%d",&P.qs);
        P.mst=P.pu*P.qs;
        printf("le montant du produit est %d\n",P.mst);
    }
    for(i=1 ;i<=n;i++)
    {
        printf("\t produit %d\n",i);
        printf("le code du produit est %d\n",P.code);
        printf("sa designiation est %s\n",P.dgn);
        printf("son prix unitaire est %d\n",P.pu);
        printf("sa quantite en stock %d\n",P.qs);
        printf("son motant est %d\n",P.mst);
    }
     P.mtst=P.mst+i;
    printf("la montant total de chaque produit est %d \n\n",P.mtst);
}
