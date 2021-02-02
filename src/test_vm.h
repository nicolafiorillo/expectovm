#ifdef TEST

  #include <glib.h>

  typedef struct {
    VM* vm;
  } vm_fixture;

  void vm_setup(vm_fixture* fixture, gconstpointer data);
  void vm_teardown(vm_fixture* fixture, gconstpointer data);
  void vm_registries_are_zero(vm_fixture* fixture, gconstpointer data);

#endif // TEST
