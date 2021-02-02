#ifdef TEST

#include "expecto.h"

#include <glib.h>
#include "test_vm.h"

void vm_setup(vm_fixture* fixture, gconstpointer data) {
  fixture->vm = new_vm();
}

void vm_teardown(vm_fixture* fixture, gconstpointer data) {
  delete_vm(fixture->vm);
}

void vm_registries_are_zero(vm_fixture* fixture, gconstpointer data) {
  for(short x = 0; x < EVM_REGISTERS; ++x)
    g_assert(fixture->vm->regs[x] == 0);
}

#endif // TEST
