#include<stdio.h>
#define n 5
#define m 4
#define l 4
main()
{
    int t1[n],t2[m],i,j,cpt=0,cpt1,t[l];
for(i=0;i<n;i++)
{
    puts("entrer une valeur du tableaux 1");
    scanf("%d",&t1[i]);
}
for(j=0;j<m;j++)
{
    puts("entrer une valeur du tableau 2");
    scanf("%d",&t2[m]);
}
for(i=0;i<n;i++)
{
  cpt=0;
  for(j=0;j<m;j++)
  {
      if(t1[i]!=t2[j])
      {
          cpt++;
      }
      else
      {
          break;
      }
  }
  }
  if(cpt==m)
  {
      t[cpt1]=t1[i];
      cpt1++;
  }

}
