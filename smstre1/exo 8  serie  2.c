#include<stdio.h>
main()
{
    int jj,m,ann;
    printf("veillez entrer l'annee de naissance\n");
    scanf("%d",&ann);
    printf("veillez entrer le mois\n");
    scanf("%d",&m);
    printf("veillez entrer le jour du mois\n");
    scanf("%d",&jj);
    if(m==1)
        printf("%d/janvier/%d",jj,ann);
    if(m==2)
        printf("%d/fevrier/%d",jj,ann);
    if(m==3)
        printf("%d/mars/%d",jj,ann);
        if(m==4)
        printf("%d/avril/%d",jj,ann);
        if(m==5)
        printf("%d/mai/%d",jj,ann);
        if(m==6)
        printf("%d/juin/%d",jj,ann);
        if(m==7)
        printf("%d/juillet/%d",jj,ann);
        if(m==8)
        printf("%d/aout/%d",jj,ann);
        if(m==9)
        printf("%d/setempbre/%d",jj,ann);
        if(m==10)
        printf("%d/octobre/%d",jj,ann);
        if(m==11)
        printf("%d/novembre/%d",jj,ann);
        if(m==12)
        printf("%d/decembre/%d",jj,ann);

}

