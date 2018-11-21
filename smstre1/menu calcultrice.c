#include<stdio.h>
main()
{
    int a,b;
    short int choix;
    double result;
    puts("entrer deux nombres");
    scanf("%d%d",&a,&b);
    puts("\t\t\t\t menu calcul");
    puts("\t\t\t\t 1-addition");
    puts("\t\t\t\t 2-multiplication");
    puts("\t\t\t\t 3-division reelle");
    puts("\t\t\t\t 4-quitter");
    printf("faites votre choix ?\t");
    scanf("%d",&choix);
    switch(choix)
    {
        case 1:
            result=(double)a+b;
            printf("%d+%d=%0.0f",a,b,result);
            break;
            case 2:
                result=(double)a*b;
                printf("%d*%d=%0.0f",a,b,result);
                break;
            case 3:
                if(b!=0)
                {
                    result=(double)a/b;
                    printf("%d//%d=%0.0f",a,b,result);
                }
                else
                {
                    printf("division impossible");
                }
                break;
            case 4:
                puts("au revoir");
                break;
            default:
                printf("veillez faire un bon choix ");
                break;
    }
}
