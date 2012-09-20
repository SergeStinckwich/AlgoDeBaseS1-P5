#include <stdio.h>

main()
{
  int maximum;
  int value;
  int rangMaximum;
  int n = 100;

  // Initialization
  printf("Entrer la valeur 1 =");
  scanf("%d", &value);
  maximum = value;
  rangMaximum = 1;

  // Iteration
  int i;
  for (i=2; i<=n; i++)
    {
      printf("Entrer la valeur %d =", i);
      scanf("%d", &value);
      if (value > maximum)
        {
          maximum = value;
          rangMaximum = i;
        }
    }

  printf("Le maximum des 100 valeurs est =%d\n",maximum);
  printf("Le rang du maximum est =%d\n", rangMaximum);
}
