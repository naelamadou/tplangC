#include<stdio.h>

#define N 1
typedef struct
{
    char*nom;
    int prix;
}Article;
main()
{
    int i=0,ok=0;
    Article Tab[N],*p;
    for(p=Tab;p<Tab+N;p++)
    {

        p->nom=(char*)malloc(10*sizeof(char));
        printf("entrer le nom de l'article\n");
        fflush(stdin);
        gets(p->nom);

        printf("entrer le prix de l'article\n");
        scanf("%d",&(p->prix));
    }
        while(p->nom[i]!='\0')
        {
            if(p->nom[i]=='a'||p->nom[i]=='A')
            {
             ok=1;
              break;
            }
            if(ok==1)
            {
               printf("%s",*(p->nom));
               printf("%d",p->prix);

            }
            else
                puts("Ce nom ne contient pas le caractere a ou A");

       i++;
        }





}


