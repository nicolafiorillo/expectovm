/*
 * Expecto Virtual Machine
 * Nicola Fiorillo, 2021
 */

#include "expecto.h"

#ifndef TEST

  int main(int argc, char** argv) {
    VM* vm = new_vm();

    print_vm(vm);
    delete_vm(vm);

    return 0;
  }

#else

  #include <stdio.h>
  #include <glib.h>

  #include "test_vm.h"

  int main(int argc, char** argv) {
    g_test_init(&argc, &argv, NULL);
    printf("Testing...");

    g_test_add("/vm/new", vm_fixture, NULL, vm_setup, vm_new, vm_teardown);

    return g_test_run();
  }

#endif // TEST
