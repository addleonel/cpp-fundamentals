## C++ Fundamentals

> C++ is a general-propose programming language, is considered as "C" with classes. C++ has object-oriented, generic, functional features in addition to facilities for low-level memory manipulation.

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
|**[GCC](https://gcc.gnu.org/) (GNU Compiler Collection)** This is most used for C | Linux | `gcc file.c -o file.out` |
|**[G++](https://gcc.gnu.org/)** This is appropiated for c++ | Linux | `g++ file.cc -o file.out` |

#### How compilers work

source code -> compiler -> Machine Language

From the following source code (called HelloWorld.cpp)

```cpp
#include <iostream>

int main() {
    // How to print "Hello World"
    std::cout << "Hello World\n"; 
    return 0;
}
```
We need to compile

```
g++ HelloWorld -o helloWorld
```

Above create a executable file (in this case "helloWorld"). To run this we need to execute the file as following:

````
./helloWorld
```
This prints in console `Hello World`


