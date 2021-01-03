/*
 * Expecto Virtual Machine
 * Nicola Fiorillo, 2021
 */

#include "headers/expecto.h"

int main() {
  VM* vm = new_vm();

  print_vm(vm);
  delete_vm(vm);
}
