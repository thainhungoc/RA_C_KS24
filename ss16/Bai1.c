#include <stdio.h>

int main() {
  int number = 100;
  int *ptr = &number;

  printf("\nCach 1");
  printf("\nGia tri cua bien number: %d", number);
  printf("\nDia chi cua bien number: %p", &number);

  printf("\n\nCach 2");
  printf("\nGia tri cua bien number qua con tro: %d", *ptr);
  printf("\nDia chi cua bien number qua con tro: %p", ptr);

  return 0;
}