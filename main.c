#include "main.h"

int main() {
  print_list(3, 10, 20, 30);
  printf("Sum: %d\n", sum_of_integers(3, 10, 20, 30)); // Outputs: Sum: 60
  print_list(5, 1, 2, 3, 4, 5);
  printf("Sum: %d\n", sum_of_integers(5, 1, 2, 3, 4, 5)); // Outputs: Sum: 15
  return 0;
}