#include <stdio.h>

int main(void) {
  int m;
  scanf("%d", &m);
  printf("kg = %dg\n--------\n", m * 1000);
  printf("KG   | G\n--------\n");
  printf("%d", m);
  printf("   |%d", m * 1000);
  return 0;
}

