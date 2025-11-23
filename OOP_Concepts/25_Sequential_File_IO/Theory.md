# Sequential File I/O and File Pointers

## File Pointers
C++ provides file pointers to navigate through a file:
- **`seekg()`**: Moves the get pointer (input).
- **`seekp()`**: Moves the put pointer (output).
- **`tellg()`**: Returns the current position of the get pointer.
- **`tellp()`**: Returns the current position of the put pointer.

## Seek Arguments
- `ios::beg`: Beginning of file.
- `ios::cur`: Current position.
- `ios::end`: End of file.

## Syntax
`fileObject.seekg(offset, direction);`
