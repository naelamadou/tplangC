#include<stdio.h>

main()
{
    int a,b;
    float x;
    printf("entrer le parametre a \n");
    scanf("%d",&a);
    printf("entrer le parametre b \n");
    scanf("%d",&b);
    if(a!=0)
    {
        x=(float)(-b)/a;
        printf("la racine est %0.1f",x);
    }
     else
       {
             if(b==0)
             puts("on a une infinite de solution");
     else
        puts("impossible");
       }

}


