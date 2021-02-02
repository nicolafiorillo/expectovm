#ifdef TEST

  #include <glib.h>

  typedef struct {
    VM* vm;
  } vm_fixture;

  void vm_setup(vm_fixture* fixture, gconstpointer data);
  void vm_teardown(vm_fixture* fixture, gconstpointer data);
  void vm_new(vm_fixture* fixture, gconstpointer data);

#endif // TEST
