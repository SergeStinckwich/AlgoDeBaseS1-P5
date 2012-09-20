#include <stdio.h>

main()
{
  int maximum;
  int value;
  int n;

  printf("Entrer le nombre de valeurs=");
  scanf("%d", &n);

  // Initialization
  printf("Entrer la valeur 1 =");
  scanf("%d", &value);
  maximum = value;

  // Iteration
  int i;
  for (i=2; i<=n; i++)
    {
      printf("Entrer la valeur %d =", i);
      scanf("%d", &value);
      if (value > maximum)
        maximum = value;
    }

  printf("Le maximum des %d valeurs est =%d\n", n, maximum);
}
