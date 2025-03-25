# get_next_line

`get_next_line` is a project from 42 that teaches how to handle input streams by implementing a function that reads content line by line from a file descriptor.

## 🛠️ Project Overview

The goal is to create a function that reads a line from a file descriptor each time it is called. This includes managing memory efficiently, handling buffers, and ensuring that the function works with various types of input sources (files, stdin, sockets, etc.).

## 📚 Key Features

- Reads from any file descriptor (including files, standard input, and pipes)
- Handles multiple file descriptors at once
- Returns one line at a time, efficiently managing buffer and memory

## 💡 Usage

Include the `get_next_line.c` and `get_next_line.h` files in your project, and use the function like this:

```c
char *line = get_next_line(fd);
```

Each call to `get_next_line(fd)` will return the next line from the file descriptor `fd` until the end of the file or an error.

## 🔧 Compilation

Compile your project with:

```bash
-Wall -Wextra -Werror
```

Make sure to define the buffer size when compiling:

```bash
-D BUFFER_SIZE=32
```

## 📦 Files Structure

```
get_next_line/
├── get_next_line.c         # Core logic
├── get_next_line_utils.c   # Utility functions
├── get_next_line.h         # Header file
├── main.c                  # Optional test file
├── Makefile                # Standard compilation rules
```

## 📌 Notes

- No memory leaks are allowed.
- Must handle multiple file descriptors without interference.
- Conforms to the 42 Norm.

