#include <stdio.h>

main()
{
  int maximum;
  int value;
  int n = 100;
  int occurencesOfMaximum;

  // Initialization
  printf("Entrer la valeur 1 =");
  scanf("%d", &value);
  maximum = value;
  occurencesOfMaximum = 1;

  // Iteration
  int i;
  for (i=2; i<=n; i++)
    {
      printf("Entrer la valeur %d =", i);
      scanf("%d", &value);
      if (value = maximum)
        occurencesOfMaximum ++;
      if (value > maximum)
        {
          maximum = value;
          occurencesOfMaximum = 1;
        }
    }

  printf("Le maximum des 100 valeurs est =%d\n", maximum);
  printf("Le maximum est apparu %d fois", occurencesOfMaximum);
}
