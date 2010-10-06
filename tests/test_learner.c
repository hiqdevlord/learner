#include "tests.h"

int main(void) {
  int failed = 0;
  run_test(test_vector);
  run_test(test_sparse_vector);
  
  print_separator();
  if(failed > 0) {
    printf("Test suite failed: %i tests\n", failed);
    return 1;
  } else {
    printf("Test suite passed\n");
    return 0;
  }
}