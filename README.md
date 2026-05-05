# queue-data-structure-c

## Description
C implementation of a queue backed by a fixed-size array, with menu commands for initialize, enqueue, dequeue, display, and inspect the first element.

Academic context: data structures exercise focused on queue operations and separating declarations from implementation in C.
## Tech Stack
- C
- Code::Blocks
- GCC
- Single-language project

## Structure
- `main.c`: main entry point or primary source file.
- `fila.h`: queue type and function declarations.
- `fila.c`: queue storage definition.
- `funcoes.c`: queue operation implementations.
- `*.cbp`: Code::Blocks project configuration.
- Source files: `fila.c`, `funcoes.c`, `main.c`.

## How to Run
gcc main.c fila.c funcoes.c -o queue-data-structure && ./queue-data-structure
