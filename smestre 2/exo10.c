#include<stdio.h>
main()
{
    int n,som=0,r;
    printf("entrer  un nombre \n ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        som=som+r;
        n=n/10;
    }
    printf("%d",som);
}
