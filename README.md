# C++

## C++ Compiler (macOS)
`macOS` comes with `Clang`, a `C++` compiler. To check if this is installed, the version should be displayed in the terminal when we run:

```shell
$ g++ --version
```

## Hello, World
A simple Hello, World example program can look like this:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World" << std::endl;
    return 0;
}
```

## Compile the C++ program
Once a `C++` file has been created with the `.cpp` file extension, it needs to be compiled to generated an executable (`.exe`) file. This will generate an executable file named `name`.

```shell
$ g++ -o name file.cpp
```

## Run the Program
Once an executable file has been created, execute the compiled program:

```shell
$ ./name
```