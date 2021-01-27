# Expecto VM

## Notes

Interpreters fall in to one of three categories:
  Tree-walking
  Stack-based
  Register-based

## Technical details

opcode (8 bits) - 0, 1, 2, 3 operands
* 0: -
* 1: 24 bits
* 2: 8 bits, 16 bits
* 3: 8 bits, 8 bits, 8 bits

## Resources

Inferno OS:
  http://www.vitanuova.com/inferno/docs.html

## C notes

```
# gcc erf.c -o erf -lm -g -Wall -03 -std=gnu11
```

### Flags

| Flag | Description |
| --- | --- |
| ```-o {name}``` | set ```{name}``` for final executable |
| ```-g``` | add debug symbols |
| ```-std=gnu11``` | conform to C11 and POSIX standards |
| ```-O3``` | optimization level [0 to 3] (0: no optimization; 3: max optimization) |
| ```-Wall``` | add all compiler warnings |
| ```-Werror``` | trait warnings as errors |
| ```-I{path}``` | add ```{path}``` in include search |
| ```-L{path}``` | add ```{path}``` in lib search |
| ```-l{lib}``` | use ```{lib}``` in linking; can be used multiple times; must follow the correct dependencies order |
| | |
<br/>

### Environment variables

Compiler variables:

CPATH LIBRARY_PATH LD_LIBRARY_PATH C_INCLUDE_PATH

```make``` variables:

CFLAGS LDLIBS

### Tools
```pkg-config``` finds libraries and generate the correct flags to use them

Examples

Get flags for linking a library:
```
# pkg-config --libs libxml-2.0
-lxml2
```

Get flags for including a library:

```
# pkg-config --cflags libxml-2.0
-I/usr/include/libxml2
```
