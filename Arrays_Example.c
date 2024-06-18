#include <stdio.h>
int main ()
{
  int edad[] = {90, 89, 54, 73, 61, 82, 96};

  float a, sum = 0;
  int i;

  int length = sizeof(edad) / sizeof(edad[0]);
  for (i = 0; i < length; i++) {
    sum += edad[i];
  }
  a = sum / length;
  printf("La edad promedio es: %.2f\n", a);
}
