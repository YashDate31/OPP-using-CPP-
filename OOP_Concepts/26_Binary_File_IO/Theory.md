# Binary File I/O

## Concept
Binary files store data in the same format as it is held in memory, not as readable text. This is more efficient for storing complex data structures like objects or arrays.

## Functions
- **`write()`**: Writes a block of memory to the file.
  - Syntax: `file.write((char*)&object, sizeof(object));`
- **`read()`**: Reads a block of memory from the file.
  - Syntax: `file.read((char*)&object, sizeof(object));`

## Casting
We must cast the address of the object to `char*` because the file stream functions expect a character pointer.
