#include<stdio.h>
#include<myconio.h>
typedef struct{
char nomparti[20],nompresi[80];
int code,nbsg,so;
}parti;
main()
{
    int nbrparti=0,nbrinscri=0,i=0,k=0,choix=0,v=0,abs=0,j=0;
    int nb,nbn=0,ok,sve=0,l,tmp,h,hmax;
    char t='a';
    int sfrg=0;
 parti p[70];
int vote,nbnul,nbvot;
do{
    puts("\t menu election");
    puts("\t 1:election presidentiel");
    puts("\t 2:election legislative");
    puts("\t 3:quitter");
    puts("\t faite votre choix ?");
    scanf("%d",&choix);
    system("cls");
    switch(choix){
    case 1:
        do{
    puts("1:Presidentielle a un tour ");
    puts("2:Presidentielle a deux tours");
   puts( "3:Retour Menu Election");
   puts("4:Quitter");
   puts("\tFaites votre choix ?");
   scanf("%d",&choix);
   system("cls");
   switch(choix){
      case 1:
    printf("\t\t\t\t election presidentielle a un tour\n");
    do
    {
        printf("entrer le nombre de partis\n");
        scanf("%d",&nbrparti);
    }while(nbrparti<5||nbrparti>10);
    printf("\t\t\t entrer les donnes de chaque partie\n");
    for(i=0;i<nbrparti;i++)
    {
        printf("enter le nom du parti numero %d\n",i+1);
        scanf("%s",&p[i].nomparti);
        printf("entrer le nom de son president\n ");
        scanf("%s",&p[i].nompresi);
      p[i].code=i;
    }
    system("cls");
    do
    {
        printf("\tentrer le nombre d'electeur d'inscrit\n");
       scanf("%d",&nbrinscri);
    }while(nbrinscri<=0);
    system("cls");
j=1;
         do
        {
            //printf("\t\tcode nomparti\n");

          printf("voulez vous votez O/N\n");
        //  scanf("%c",&t);
          t=getch();
          //fflush(stdin);
          if(t=='o')
         {
              for(i=0;i<nbrparti;i++)
        {
          printf("\t\t%d%s\n",p[i].code,p[i].nomparti);
        }
          puts("veillez voter par le code des parti");
          scanf("%d",&v);
          ok=0;
          for(k=0;k<nbrparti;k++)
              {
                  if(v==p[k].code)
        {
            ok=1;
            sfrg++;
            p[k].so++;
        }
              }
            if(ok==0)
        {
             nbn++;
        }

       }
       else
       {
           abs++;
       }
             j++;
    }while(j<=nbrinscri);
    system("cls");
    for(l=0;l<=nbrinscri;l++)
        {
            for(j=l+1;j<=nbrinscri;j++)
            {
                if(p[l].so>p[j].so)
                {
                    tmp=p[l].so;
                    p[l].so=p[j].so;
                    p[j].so=tmp;
                }
            }
            printf("le resultat croissant des partis \n");
               for(l=0;l<=nbrinscri;l++)
    {
        printf(" %s  %d ",p[l].nomparti,p[l].so);
    }
    printf("\n");
    }
    printf("le nombre d'inscri  est :%d\n\n",nbrinscri);
    printf("le sufrage valablemeent exprimee est: %d\n\n",sfrg);
    printf("le nombre de bultin nul est :%d\n\n",nbn);
    printf("le taux d'abstation est : %d\n\n",abs);
    for(k=0;k<nbrinscri;k++)
    {
         printf("le sufrage valablemeent exprimee pour la parti %s est: %d\n\n",p[k].nomparti,p[k].so);
    }
    printf("\n\n");

    for(i=0;i<nbrinscri;i++)
 {
     if(i==0)
                h=p[i].so;
            else
            {
                if(p[i].so>h)
                h=p[i].so;
            }
            }
            hmax=h;
              for(i=0;i<nbrinscri;i++)
            {
              printf("%s\t",p[i].nomparti);
            }
            printf("\n");
            for(i=0 ; i<hmax ; i++)
            {
                for(j=0;j<nbrinscri;j++)
                {
                    textcolor(p[j].so);
                    if(p[j].so<h)
                        printf(" ");
                    else
                        printf("*");
                        printf("\t");
                }
                h--;
                printf("\n");
            }
    system("pause");
    system("cls");
    break;
    case 2:
      printf("\t\t-------- election presidentielle a deux tour---------\n");
        do
    {
        printf("entrer le nombre de partis\n");
        scanf("%d",&nbrparti);
    }while(nbrparti<5||nbrparti<=10);
printf("\t\t\t entrer les donnes de chaque partie\n");
    for(i=0;i<nbrparti;i++)
    {
        printf("enter le nom du parti numero %d\n",i+1);
        scanf("%s",&p[i].nomparti);
        printf("entrer le nom de son president\n ");
        scanf("%s",&p[i].nompresi);
      p[i].code=i;
    }
    do
    {
        printf("\tentrer le nombre d'electeur d'inscrit\n");
       scanf("%d",&nbrinscri);
    }while(nbrinscri<=0);
    system("cls");
    j=1;
         do
        {
          printf("voulez vous votez O/N\n");
          t=getch();
          if(t=='o')
         {
              for(i=0;i<nbrparti;i++)
        {
          printf("\t\t%d%s\n",p[i].code,p[i].nomparti);
        }
          puts("veillez voter par le code des parti");
          scanf("%d",&v);
          ok=0;
          for(k=0;k<nbrparti;k++)
              {
                  if(v==p[k].code)
        {
            ok=1;
            sfrg++;
        }

              }
            if(ok==0)
        {
             nbn++;
        }

       }
       else
       {
           abs++;
       }
             j++;
    }while(j<=nbrinscri);
    printf("le nombre de votant est :%d\n",nbrinscri);
    printf("le sufrage valablemeent exprimee est: %d\n",sfrg);
    printf("le nombre de bultin nul est :%d\n",nbn);
    printf("le taux d'abstation est : %d\n",abs);
for(i=0 ; i<hmax ; i++)
            {
                for(j=0;j<nbrinscri;j++)
                {
                    textcolor(p[j].so);
                    if(p[j].so<h)
                        printf(" ");
                    else
                        printf("*");
                        printf("\t");
                }
                h--;
                printf("\n");
            }

    system("pause");
    system("cls");
    break;
    case 3:
    case 4:
        break;
}
}while(choix==1||choix==2);
    case 2:
        puts("\t\t!!!!!!!!!!!election legislative!!!!!!!!!!!!!!");
            do
    {
        printf("entrer le nombre de partis\n");
        scanf("%d",&nbrparti);
    }while(nbrparti<=0);
printf("\t\t\t entrer les donnes de chaque partie\n");
    for(i=0;i<nbrparti;i++)
    {
        printf("enter le nom du parti numero %d\n",i+1);
        scanf("%s",&p[i].nomparti);
        printf("entrer le nom de son president\n ");
        scanf("%s",&p[i].nompresi);
      p[i].code=i;
    }
    do
    {
        printf("\tentrer le nombre d'electeur d'inscrit\n");
       scanf("%d",&nbrinscri);
    }while(nbrinscri<=0);
    system("cls");
    j=1;
         do
        {
          printf("voulez vous votez O/N\n");
          t=getch();
          if(t=='o')
         {
              for(i=0;i<nbrparti;i++)
        {
          printf("\t\t%d%s\n",p[i].code,p[i].nomparti);
        }
          puts("veillez voter par le code des parti");
          scanf("%d",&v);
          ok=0;
          for(k=0;k<nbrparti;k++)
              {
                  if(v==p[k].code)
        {
            ok=1;
            sfrg++;
            p[k].so++;
        }

              }
            if(ok==0)
        {
             nbn++;
        }

       }
       else
       {
           abs++;
       }
             j++;
    }while(j<=nbrinscri);
    printf("le nombre de votant est :%d\n\n",nbrinscri);
    printf("le sufrage valablemeent exprimee est: %d\n\n",sfrg);
    printf("le nombre de bultin nul est :%d\n\n",nbn);
    printf("le taux d'abstation est : %d\n\n",abs);
    p[i].nbsg=p[k].so*120/sfrg;
    for(k=0;k<nbrparti;k++)
    {
        printf("le sufrage obtenu pour la parti %s est:%d\n\n",p[k].nomparti,p[k].so);
        printf("le nombre  siege obtenu pour la parti %s est:%d\n\n",p[k].nomparti,p[k].nbsg);
    }

    for(i=0;i<nbrinscri;i++)
 {
     if(i==0)
                h=p[i].so;
            else
            {
                if(p[i].so>h)
                h=p[i].so;
            }
            }
            hmax=h;
              for(i=0;i<nbrinscri;i++)
            {
              printf("%s\t",p[i].nomparti);
            }
            printf("\n");
            for(i=0 ; i<hmax ; i++)
            {
                for(j=0;j<nbrinscri;j++)
                {
                    textcolor(p[j].so);
                    if(p[j].so<h)
                        printf(" ");
                    else
                        printf("*");
                        printf("\t");
                }
                h--;
                printf("\n");
            }
    system("pause");
    system("cls");
    break;
    case 3:
        break;
}
}while(choix>3);

    }




