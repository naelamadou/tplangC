#include<stdio.h>
#include<myconio.h>
#include<math.h>
main()
{
    int n,choix,val[70],i,j,h,hmax,x=10,y=15;
   do
   {
    puts("1:serie de valeur positives");
    puts("2:serie de valeur positives ou negatives");
    puts("faite votre choix?");
    scanf("%d",&choix);
    system("cls");
    switch(choix)
       {
        case 1:
            do
    {
        printf("entrer le nombre de valeur\n");
        scanf("%d",&n);
        if(n<0)
        {
          puts("veillez entrer le nombre de valeur");
            scanf("%d",&n);
        }
    }while(n<1);
            printf("le nombre de valeur positive est:%d\n",n);
            system("cls");
             printf("serie de %d valeur\n",n);
            for(i=0;i<n;i++)
            {
                printf("entrer la valeur: %d\n",i+1);
                scanf("%d",&val[i]);
                if(val[i]<=0)
                do
                {
                    printf("veillez entrer un nombre positive\n");
                    scanf("%d",&val[i]);
                    printf("\n");
                }while(val[i]<=0);
            if(i==0)
                h=val[i];
            else
            {
                if(val[i]>h)
                h=val[i];
            }
            }
            hmax=h;
              for(i=0;i<n;i++)
            {
              printf("%d\t",val[i]);
            }
            printf("\n");
            for(i=0 ; i<hmax ; i++)
            {
                for(j=0;j<n;j++)
                {
                    textcolor(val[j]);
                    if(val[j]<h)
                        printf(" ");
                    else
                        printf("*");
                        printf("\t");
                }
                h--;
                printf("\n");
            }
            break;
            case 2:
                do
    {
        printf("entrer le nombre de valeur\n");
        scanf("%d",&n);
        if(n<0)
        {
          puts("veillez entrer le nombre de valeur");
            scanf("%d",&n);
        }
    }while(n<1);
                 printf("le nombre de valeur positive ou negative est:%d\n",n);
          for(i=0 ;i<n ;i++)
              {
              //  printf("entrer la valeur: %d\n",i+1);
                scanf("%d",&val[i]);
                y=15;
          for(j=0 ;j<fabs(val[i]) ;j++)
            {
              textcolor (fabs (val[i]));
              gotoxy(x,y);
              if(j<=val[i])
              {
                  printf("*");
              }
              else
              {
                  printf("*");
              }
              if(val[i]<0)
                y++;
              else
                y--;
            }
            x+=5;

              }
               system("pause");
               system("cls");
            break;
             default:
            printf("au revoir");
        }
           }while(choix ==1 || choix ==2);
    }



