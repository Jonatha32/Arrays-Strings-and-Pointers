#include <stdio.h>
int main ()
{
  int n[] = {24, 54, 66, 345, 64}; /*Definimos un array "n" y le asignamos cinco valores*/
  int i;

  for (i = 0; i < 5; i++) //Realizamos un 'for' para la variable 'i'
    {
      printf("%d\n", n[i]); /*Imprimimos las variables*/
    }
  return 0;
}
