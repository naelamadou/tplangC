#include<stdio.h>
main()
{
 int x;
 puts("entrer un nombre");
 scanf("%d,&x");
 if(x>0)
  {
     puts("positif");
  }
   else
  {
   if(x<0)
    puts("negatif");
    else
        puts("nul");

  }
}
