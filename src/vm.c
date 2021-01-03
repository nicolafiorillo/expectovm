#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "headers/vm.h"

VM* new_vm() {
  VM* vm = malloc(sizeof(VM));
  memset(vm, 0, sizeof(VM));

  return vm;
}

void delete_vm(VM* vm) {
  memset(vm, 0, sizeof(VM));
  free(vm);
}

void print_vm(VM* vm) {
  for(short r = 0; r < EVM_REGISTERS; ++r) {
    printf("r%02d: %08x\n", r, vm->regs[r]);
  }
}
