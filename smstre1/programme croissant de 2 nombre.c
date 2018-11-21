#include<stdio.h>
main()
{
    system("color 3");
    int x,y;
    printf("entrer les deux valeurs entier \n");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("le rangement croissant est %d et %d",y,x);
    }
    if(x<=y)
    {
        printf("le rangement croissant est %d et %d",x,y);
    }

}



