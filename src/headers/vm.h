#ifndef __VM_H__
#define __VM_H__

#include <stdint.h>

#define EVM_REGISTERS (32)

/*
 *  The Virtual Machine:
 *  - registers are 32 bits
 */
typedef struct VM
{
  int32_t regs[EVM_REGISTERS];
} VM;

/*
 *  Create a new virtual machine
 */
VM* new_vm();

/*
 *  Free the virtual machine
 */
void delete_vm(VM*);

/*
 *  Print to stdout current vm data
 */
void print_vm(VM*);

#endif
