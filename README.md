# C++

## C++ Compiler (macOS)
`macOS` comes with `Clang`, a `C++` compiler. To check if this is installed, the version should be displayed in the terminal when we run:

```shell
$ g++ --version
```

## Hello, World
A simple Hello, World example program can look like this:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World" << std::endl;
    return 0;
}
```

## Compile the C++ program
Once a `C++` file has been created with the `.cpp` file extension, it needs to be compiled to generated an executable (`.exe`) file. This will generate an executable file named `hello`.

```shell
$ g++ -o hello hello.cpp
```

## Run the Program
Once an executable file has been created, execute the compiled program:

```shell
$ ./hello
```

## Window
We can show a window using the `SFML (Simple and Fast Multimedia Library)`, other libraries are also available. This is a simple graphics library.

Begin by installing `SMFL` via `Homebrew`:

```shell
$ brew install sfml
```

Our simple program to display a window:

```cpp
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.display();
    }

    return 0;
}
```

To compile the program:

```shell
$ g++ -o window window.cpp -lsfml-graphics -lsfml-window -lsfml-system
```

We can then execute the program to show a window on-screen.

```
$ ./window
```