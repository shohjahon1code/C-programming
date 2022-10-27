#include <stdio.h>
#include <stdlib.h>

int main()
{

  double a, b, c;
  printf("A,B,C qiymatlarini ketma-ket kiriting: ");
  scanf("%lf%lf%lf", &a, &b, &c);
  double javob = a * b * c + (a * b - 4) / 2;
  printf("Formuladan qolgan javob: %.2lf", javob);

  return 0;
}