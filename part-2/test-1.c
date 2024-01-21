#include <stdio.h>
void squareSumDifference(int x, int y, int *sum, int *difference);
void squareSumDifference(int x, int y, int *sum, int *difference) {
  *sum = x * x + y * y;
  *difference = x * x - y * y;
}
int main() {
  int a, b;
  int square_sum, square_difference;
  scanf("%d%d", &a, &b);
  squareSumDifference(a, b, &square_sum, &square_difference);
  printf("sum = %d ; difference = %d", square_sum, square_difference);
}
