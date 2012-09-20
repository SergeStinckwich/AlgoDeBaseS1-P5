#include <stdio.h>

main()

{
  int numberOfValues;
  float value;
  float sum;

  // Initialization
  numberOfValues = 0;
  sum = 0.0;
  value = 0.0;

  // Iteration
  while (value>=0.0)
    {
      sum = sum + value;
      numberOfValues++;
      printf("Entrer la note %d =", numberOfValues);
      scanf("%f", &value);
    }
  numberOfValues--;
  printf("La moyenne des %d notes est =%f\n", numberOfValues, sum/numberOfValues);
}
