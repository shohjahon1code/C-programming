#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  printf("Iltimos son kiriting! :");
  scanf("%d", &num);
  if (num > 0)
  {
    printf("Kiritgan soningiz Musbat: %d", num);
  }
  else if (num == 0)
  {
    printf("Son na manfiy na musbat");
  }
  else
  {
    printf("Kiritgan soningiz manfiy ekan: %d", num);
  }
  return 0;
}