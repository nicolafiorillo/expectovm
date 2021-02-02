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

#endif // TEST
