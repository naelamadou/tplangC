#include<stdio.h>
#define n 10
main()
{
    int t[n],i,cpt=0;
    for(i=0;i<10;i++)
    {
        cpt=cpt+2;
        t[i]=cpt;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",t[i]);
    }
}
