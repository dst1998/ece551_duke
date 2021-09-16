#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);

int run_check(int * array, size_t n, size_t expected_ans) {
  size_t ans = maxSeq(array, n);
  for (size_t i = 0; i < n; i++) {
    printf("%d", array[i]);
  }
  printf("\n");
  if (ans == expected_ans) {
    printf("Corrct! answer is %ld\n", expected_ans);
    return EXIT_SUCCESS;
  }
  printf("Wrong! answer is %ld, your answer is %ld\n", expected_ans, ans);
  exit(EXIT_FAILURE);
}

int main() {
  int array1[] = {1, 2, 1, 3, 5, 7, 2, 4, 6, 9};
  int array2[] = {1, 1, 1, 1, 1};
  int array3[] = {10, 9, 8, 7, 6, 5, 2, 4, 6, 9};
  int array4[] = {1, 2, 1, 2, 1, 2, 9};
  int array5[] = {-1, -2, 0, 2, 1, 2, 9};
  int array6[] = {-1, -2127283648, 10, 0, 0, 0, 0};
  run_check(array1, 10, 4);
  run_check(array2, 5, 1);
  run_check(array3, 10, 4);
  run_check(array4, 7, 3);
  run_check(array5, 0, 0);
  run_check(array6, 7, 2);

  return EXIT_SUCCESS;
}
