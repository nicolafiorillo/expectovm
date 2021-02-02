#include <stdio.h>
#include <stdlib.h>

#include "expecto.h"

VM* new_vm() {
  VM* vm = evm_malloc(sizeof(VM));
  return vm;
}

void delete_vm(VM* vm) {
  evm_free(vm, sizeof(VM));
}

void print_vm(VM* vm) {
  for(short r = 0; r < EVM_REGISTERS; ++r) {
    printf("r%02d: %08x\n", r, vm->regs[r]);
  }
}
