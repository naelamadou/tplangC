#include<stdio.h>
main()
{
    int n,i,cptp,cptne,nbre;
    do
    {
        printf("entrer le nombres de valeurs:");
        scanf("%d",&n);
        if(n<1)
            printf("entrer une bonne valeur");
    }
    while(n<1);
    cptp=0;
    cptne=0;
    for(i=1;i<=n;i++)
    {
    puts("entrer un nombre valeurs");
    scanf("%d",&nbre);
    if(nbre>0)
        cptp=cptp+1;
    if(nbre<0)
        cptne=cptne+1;
    }
    printf("le nombre de valeur positive est: %d\n",cptp);
    printf("le nombre de valeur negative est: %d\n",cptne);
}
