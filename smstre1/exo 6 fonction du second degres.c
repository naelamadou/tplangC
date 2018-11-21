#include<stdio.h>
#include<math.h>
main()
{
   int a,b,c,delta;
   float x1,x0,x2,x;
   printf("entrer les parametres a,b,c \n");
   scanf("%d%d%d",&a,&b,&c);
   if(a==0)
    {
      printf("on a une equation du premier degres\n");
      if(b!=0)
      {
        x=(float)(-c)/b;
        printf("la racine est %f\n",x);
      }

      else
           {
             if(c==0)
             puts("on a une infinite de solution\n");
         else
          puts("impossible\n");
       }

    }

delta=(pow(b,2)-4*a*c);
if(delta==0)
{printf("la fonction f(x)=%dX2+%dX+%d\n",a,b,c);
    x0=(float)-b/2*a;
    printf("la solution est %f\n",x0);
}
else
{
      if(delta>0){
        puts("on a deux solutions distinctes x1,x2\n");
        x1=(float)(-b-sqrt(delta)/2*a);
        x2=(float)(-b+sqrt(delta)/2*a);
         printf("la solution x1 est %f\n\n",x1);
         printf("la solution x2 est %f\n\n",x2);}
else
    {
        puts("\nl equation n admet pas de solution\n");
}
}
}
