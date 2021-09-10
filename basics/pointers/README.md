## Pointers
- https://www.cplusplus.com/doc/tutorial/pointers/
- https://www.programiz.com/cpp-programming/pointers
- https://www.guru99.com/cpp-pointers.html

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

- https://stackoverflow.com/questions/14224831/meaning-of-referencing-and-dereferencing-in-c

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

> 
