#include <stdio.h>

main()
{
  int maximum;
  int value1, value2, value3;
  printf("Entrer la valeur 1=");
  scanf("%d", &value1);
  printf("Entrer la valeur 2=");
  scanf("%d", &value2);
  printf("Entrer la valeur 3=");
  scanf("%d", &value3);

  if (value1 > value2)
    maximum = value1;
  else
    maximum = value2;

  if (value3 > maximum)
    maximum = value3;

  printf("Le maximum des 3 valeurs est =%d\n",maximum);
}
