#include<stdio.h>
#define n 5
main()
{
    int t[n],i,j,tmp;
    for(i=0; i<n; i++)
    {
        printf("entrer la %d valeur du tableaux:",i+1);
        scanf("%d",&t[i]);
    }
      puts("les valeurs du tableaux avant echange sont");
      for(i=0; i<n; i++)
      {
          printf("%d",t[i]);
      }
      printf("\n");
      puts("le rangement decroissant du tableaux est");
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(t[i]<t[j])
                {
                    tmp=t[i];
                    t[i]=t[j];
                    t[j]=tmp;
                }
            }
            printf("%d",t[i]);
        }
        printf("\n");
        puts("le rangement croissant du tableaux est");
         for(i=0;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(t[i]>t[j])
                {
                    tmp=t[i];
                    t[i]=t[j];
                    t[j]=tmp;
                }
            }
            printf("%d",t[i]);
        }
}
