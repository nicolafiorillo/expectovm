#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "expecto.h"

void * evm_malloc(size_t __size) {
  void * __ptr = malloc(__size);
  if (__ptr == NULL) {
    fprintf(stderr, "not enought memory");
    exit(1);
  }

  memset(__ptr, 0, __size);
  return __ptr;
}

void evm_free (void * __ptr, size_t __size) {
  memset(__ptr, 0, __size);
  free(__ptr);
}
