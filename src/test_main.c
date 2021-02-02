/*
 * Expecto Virtual Machine
 * Nicola Fiorillo, 2021
 */

#include "expecto.h"

#ifdef TEST

  #include <stdio.h>
  #include <glib.h>

  #include "test_vm.h"

  int main(int argc, char** argv) {
    g_test_init(&argc, &argv, NULL);
    printf("Testing...");

    g_test_add("/vm/registries_are_zero", vm_fixture, NULL, vm_setup, vm_registries_are_zero, vm_teardown);

    return g_test_run();
  }

#endif // TEST
