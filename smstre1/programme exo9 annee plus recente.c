#include<stdio.h>
main()
{
    int jj1,jj2,mois1,mois2,annee1,annee2,a,b,c;
    puts("entrer la date");
    scanf("%d%d%d",&jj1,&mois1,&annee1);
    puts("entrer la date");
    scanf("%d%d%d",&jj2,&mois2,&annee2);
    if(annee1>annee2)
    {
        a=jj1;
        b=mois1;
        c=annee1;
    }
    else
    {
        if(annee1<annee2)
        {
            a=jj2;
            b=mois2;
            c=annee2;
        }
            else
            {
                if(mois1>mois2)
                {
                    a=jj1;
                    b=mois1;
                    c=annee1;
                }
                else
                {
                    if(mois1<mois2)
                    {
                        a=jj2;
                        b=mois2;
                        c=annee2;
                    }

                    else
                    {
                        if(jj1>jj2)
                        {
                            a=jj1;
                            b=mois1;
                            c=annee1;
                        }

                        else
                        {
                            if(jj1<jj2)
                            {
                                a=jj2;
                                b=mois2;
                                c=annee2;
                            }
                            else
                            {
                                printf("les deux dates sont egales");
                            }
                        }
                    }
                }
            }
        }
    }
 }  printf("l annee recente est %d/%d/%d",a,b,c);
}
