#include <stdio.h>

main()
{
  int maximum;
  int value;
  printf("Entrer la valeur 1=");
  scanf("%d", &value);
  maximum = value;
  printf("Entrer la valeur 2=");
  scanf("%d", &value);
  if (value > maximum)
    maximum = value;
  printf("Entrer la valeur 3=");
  scanf("%d", &value);
  if (value > maximum)
    maximum = value;

  printf("Le maximum des 3 valeurs est =%d\n",maximum);
}
