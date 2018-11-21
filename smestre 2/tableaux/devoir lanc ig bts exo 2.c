#include<stdio.h>
#define n 5
main()
{
    int tab[n],i,tmp;
    for(i=0;i<n;i++)
    {
        printf("enter la valeur %d du tableaux:",i+1);
        scanf("%d",&tab[i]);
    }
       for(i=0;i<n;i++)
       {
           printf("%d",tab[i]);
       }
       printf("\n");
       tmp=tab[0];
       for(i=0;i<n;i++)
       {
           tab[i]=tab[i+1];
       }
       tab[n]=tmp;
       for(i=0;i<n-1;i++)
       {
           printf("%d",tab[i]);
       }
       printf("%d",tab[n]);

}
