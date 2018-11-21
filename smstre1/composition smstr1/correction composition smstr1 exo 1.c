#include<stdio.h>
main()
{
  char car1,car2,car3;
  char  min1,max1,moy;
  puts("entrer trois caracteres");
  scanf("%c%c%c",&car1,&car2,&car3);
  if(car1>car2)
  {
      min1=car2;
      max1=car1;
  }
  else
  {
      min1=car1;
      max1=car2;
  }
  if(max1>car3)
  {
      if(car3<min1)
      {
          moy=min1;
          min1=car3;
      }
      else
      {
          moy=car3;
      }
  }
  else
  {
      moy=max1;
      max1=car3;
  }

printf("%c",min1);
printf("%c",moy);
printf("%c",max1);
}
