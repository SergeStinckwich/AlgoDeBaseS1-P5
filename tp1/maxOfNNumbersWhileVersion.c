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
  i = 2;
  while (i<=n)
    {
      printf("Entrer la valeur %d =", i);
      scanf("%d", &value);
      if (value > maximum)
        maximum = value;
      i++;
    }

  printf("Le maximum des %d valeurs est =%d\n", n, maximum);
}
