#include<stdio.h>
typedef struct
{
    int code;
    char nom[4],npr[3];
}parti;
main()
{
    int i;
    parti t[3]={{0,"APR","MS"},{1,"PDS","AW"},{2,"PS","TD"}};
    for(i=0;i<3;i++)
    {
        printf("code:%d\n",t[i].code);
        printf("nom:%s\n",t[i].nom);
        printf("nom president:%s\n",t[i].npr);
    }
}
