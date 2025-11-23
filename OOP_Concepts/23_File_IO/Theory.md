# File Handling in C++

## Classes for File Stream Operations
- **`ifstream`**: Stream class to read from files.
- **`ofstream`**: Stream class to write to files.
- **`fstream`**: Stream class to both read and write from/to files.

## Opening a File
- Using constructor: `ofstream outfile("filename.txt");`
- Using `open()` function: `outfile.open("filename.txt");`

## File Modes
- `ios::in`: Open for reading.
- `ios::out`: Open for writing (default for ofstream).
- `ios::app`: Append to end of file.
- `ios::binary`: Open in binary mode.

## Closing a File
- `outfile.close();`
