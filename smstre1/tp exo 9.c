#include<stdio.h>
#include<math.h>
main()
{
  int xa,ya,xb,yb;
  double dist;
  puts("entrer les coordonnee de point a");
  scanf("%d%d",&xa,&ya);
  printf("entrer les coordonnees du point b\n");
  scanf("%d%d",&xb,&yb);
  dist=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
  printf("la distance entre les points a et b est %f",dist);
}
