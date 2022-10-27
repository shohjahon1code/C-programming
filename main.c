#include <stdio.h>
#include <stdlib.h>

int main()
{
  // 45987
  int son, onMinglik, minglik, yuzlik, onlik, birlik;
  printf("Beshxonali son kiriting! ");
  scanf("%d", &son);

  onMinglik = son / 10000;
  minglik = (son % 10000) / 1000;
  yuzlik = (son % 1000) / 100;
  onlik = (son % 100) / 10;
  birlik = (son % 10) / 1;

  printf("%d\t%d\t%d\t%d\t%d\t", onMinglik, minglik, yuzlik, onlik, birlik);
  return 0;
}