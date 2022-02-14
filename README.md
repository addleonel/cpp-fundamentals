## C++ Fundamentals

> C++ is a general-purpose programming language, is considered as "C" with classes. C++ has object-oriented, generic, functional features in addition to facilities for low-level memory manipulation.

### IDEs and Code Editors for C++
- code::Blocks
- Eclipse
- Microsoft Visual Studio
- VSCode
- CodeLite
- Geany
- Vim, etc.

### Compilers
|Compiler|Platform|Command|
|--------|--------|-------|
|**[GCC](https://gcc.gnu.org/) (GNU Compiler Collection)** this is most used for C | Linux | `gcc file.c -o file.out` |
|**[G++](https://gcc.gnu.org/)** this is appropriated for c++ | Linux | `g++ file.cc -o file.out` |
|**[Microsoft Visual C++ (MSVC) compiler](https://code.visualstudio.com/docs/cpp/config-msvc)**| Microsoft | `cl file.cc`|

#### How compilers work

`source code -> compiler -> Machine Language`

From the following source code (called helloWorld.cpp)

```cpp
#include <iostream>

int main() {
    // How to print "Hello World"
    std::cout << "Hello World\n"; 
    return 0;
}
```
We need to compile (`g++` helps us to do this)

```
g++ helloWorld.cpp -o helloWorld
```

Above create an executable file (in this case `helloWorld`). To run this we need to execute the file as follows:

```
./helloWorld
```

This prints in console `Hello World`


