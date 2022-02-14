## Pointers

### How to declare an pointer?

```cpp
#include <iostream>

int main() {
	int a;  // 'a' variable
	int *x;  // Declaring a pointer, *x is a pointer
	return 0;
}
```

### Referencing

> Referencing means taking the address of an existing variable (using `&`) to set a pointer variable. In order to be valid, a pointer has tobe set to the address of a variable of the same type as the pointer, without the asterick.

```cpp
#include <iostrteam>

int main() {
	int a;
	int *x;

	a = 4;  // assigning 4 to 'a' variable
	x = &a;  // referencing the memory address of 'a' 
	
	std::cout << a << std::endl;  // 4
	std::cout << x << std::endl;  // 0x7ffc965e759c
		
	return 0;
}
```

### Dereferencing

>  Dereferencing a pointer means using the * operator (asterisk character) to retrieve the value from the memory address that is pointed by the pointer: NOTE: The value stored at the address of the pointer must be a value OF THE SAME TYPE as the type of variable the pointer "points" to, but there is no guarantee this is the case unless the pointer was set correctly. The type of variable the pointer points to is the type less the outermost asterisk.

```cpp
#include <iostream>

int main() {
	int a;
	int* x;

	a = 4;
	x = &a;

	std::cout << *x << std::endl;  // 4, '*x' retrieve the value

	*x = 12;  // if '*x' is change, 'a' also will change

	std::cout << *x << std::endl;  // 12
	std::cout << a << std::endl;  // 12
	
	std::cout << &a << x << std::endl;  // print the same address 0x7ffc965e759c

	return 0;
}
```

### Sources:

- https://www.cplusplus.com/doc/tutorial/pointers/
- https://www.programiz.com/cpp-programming/pointers
- https://www.guru99.com/cpp-pointers.html
- https://stackoverflow.com/questions/14224831/meaning-of-referencing-and-dereferencing-in-c
- https://www.codingunit.com/cplusplus-tutorial-pointers-reference-and-dereference-operators
- https://en.wikipedia.org/wiki/Dereference_operator
