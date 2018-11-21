
#include<stdio.h>
main()
{
    int x,y,z;
    int min1,moy,max1;
    printf("entrer les trois valeurs entier \n");
    scanf("%d%d%d",&x,&y,&z);
    if(x<y)
    {
        min1=x;
        max1=y;
    }
    else
    {
        min1=y;
        max1=x;
    }
    if(min1>z)
    {
        moy=min1;
        min1=z;
    }
    else
    {
        if(max1<z)
        {
            moy=max1;
            max1=z;
        }
        else
        {
            moy=z;
        }
    }
    printf("la valeur la plus petite est %d \n",min1);
    printf("la valeur la plus grande est %d \n",max1);
printf("l ordre est %d %d %d",min1,moy,max1);
}
