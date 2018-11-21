
#include<stdio.h>
main()
{

    int x,y,z,t;
    int max1,max2,min1,min2,yaya;
    int pti,moy1,moy2,grd;
    printf("entrer les quatres valeurs entier \n");
    scanf("%d%d%d%d",&x,&y,&z,&t);
    if(x>y)
    {
           max1=x;
           max2=y;
    }
    else
        {
       max1=y;
        max2=x;
        }
    if(z>t)
    {
        min1=z;
        min2=t;
    }
    else
    {
        min1=t;
        min2=z;
    }
    if(max1>min1)
        {grd=max1;
         moy1=min1;
        }
        else
        {
         grd=min1;
         moy1=max1;
        }
        if(max2<min2)
        {
            pti=max2;
            moy2=min2;
        }
        else
        {
            pti=min2;
            moy2=max2;
        }
        if(moy1>moy2)
        {
            yaya=moy1;
            moy1=moy2;
            moy2=yaya;
        }
 printf("le plus grand nombre est %d\n",grd);
 printf("la plus petite nombre est %d\n",pti);
 printf("les deux nombres intermediaire sont:%det%d\n",moy1,moy2);
 printf("les deux nombres les plus petits sont:%det%d\n",pti,moy1);
 printf("les deux valeurs les plus grandes sont: %d %d",moy2,grd);


}
