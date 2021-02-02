#ifdef TEST

#include "headers/expecto.h"

#include <glib.h>
#include "test_vm.h"

void vm_setup(vm_fixture* fixture, gconstpointer data) {
  fixture->vm = new_vm();
}

void vm_teardown(vm_fixture* fixture, gconstpointer data) {
  delete_vm(fixture->vm);
}

void vm_new(vm_fixture* fixture, gconstpointer data) {
  g_assert(fixture->vm->regs[0] == 0);
}

#endif // TEST
