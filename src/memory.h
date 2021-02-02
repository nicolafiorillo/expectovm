#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <stddef.h>

void * evm_malloc(size_t);
void evm_free (void *, size_t);

#endif