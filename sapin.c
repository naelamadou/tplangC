#include<stdio.h>
#include<myconio.h>
main()
{
    int n,l,i,k,j,s,t;
     textcolor(15);
    puts("entrer le nombre de lignes du sapin");
    scanf("%d",&n);
     textcolor(15);
    printf("entrer la hauteur du pied de sapin\n");
    scanf("%d",&l);
   for(i=1;i<=n;i++)
    {
        textcolor(14);
        for(j=n;j>i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
       for(s=2;s<=i;s++)
                printf("*");
            printf("\n");
   }
    for(k=1;k<=l;k++)
        {
            for(i=1;i<=n;i++)
            for(t=j;t>i;i++)
            printf(" ");
            printf("@");
            printf("\n");
       }
}
