#include <stdio.h>

main()

{
  int numberOfValues;
  int value;
  int maximum;
  int minimum;

  printf("Entrer nombre de valeurs =");
  scanf("%d",&numberOfValues);

  if (numberOfValues <=0)
    printf("Impossible\n");

  else
    {  
      // Initialization
      printf("Entrer la valeur 1 =");
      scanf("%d", &value);
      maximum = value;
      minimum = value;

      // Iteration
      int i;
      for (i=2; i<=numberOfValues; i++)
        {
          printf("Entrer la valeur %d =", i);
          scanf("%d", &value);
          if (value > maximum)
            maximum = value;
          if (value < minimum)
            minimum = value;
        }
      printf("Le maximum des %d valeurs est =%d\n", numberOfValues, maximum);
      printf("Le minimum des %d valeurs est =%d\n", numberOfValues, minimum);
    }
}
