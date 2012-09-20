#include <stdio.h>

main()
{
  int maximum;
  int valeur;
  printf("Entrer la valeur 1=");
  scanf("%d", &valeur);
  maximum = valeur;
  printf("Entrer la valeur 2=");
  scanf("%d", &valeur);
  if (valeur > maximum)
    maximum = valeur;
  printf("Entrer la valeur 3=");
  scanf("%d", &valeur);
  if (valeur > maximum)
    maximum = valeur;
  printf("Entrer la valeur 4=");
  scanf("%d", &valeur);
  if (valeur > maximum)
    maximum = valeur;

  printf("Le maximum des 3 valeurs est =%d\n",maximum);
}
