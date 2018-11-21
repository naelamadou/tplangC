#include<stdio.h>
main()
{
    int n,i,cpt=0;
    puts("donner une valeur >0");
    do
    {
        scanf("%d",&n);
        if(n<=0)
            puts("donner une bonne valeur");
    }while(n<=0);
    i=1;
    while(i<=n)
    {
        if (n%i==0)
            cpt++;
        i++;
    }
    if(cpt==2)//if(cpt==2 && n!=2) ;
    {
        printf("%d est premier",n);
    }
    else
    {
        printf("%d n'est pas premier",n);
    }
}
//teston la negation
//i=2; est trouve=1;
//while(i<=n-1)
            //oubien i<n
            //{
                //if(n%i==0)
                //{
                //trouve=0;
                //break;
            //}
            //}
            //if(trouve==1)
