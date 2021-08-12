#include <cstdio>
#include <iostream>

int main() {
	/*
	 * ARRAY INTRODUCTION
	 * An array is a series of elements of the same type placed in contiguous memory locations 
	 * that can be individually referenced by adding an index to a unique identifier.
	 * For array of a known size, 10 in this case, use the following declaration:
	 * 
	 * int arr[10]; // Declares an array named 'arr' of size 10, i.e, you can store 10 integers.
	 *
	 * */

	int amount, value;
	int array_numbers[] = {};

	std::cout<<"Amount:"; std::cin>>amount;
	
	while (amount >= 0){
		
		std::cin>>value;
		std::cout<<"i="<<amount<<"value="<<value;
		array_numbers[amount-1] = value;
		amount -= 1;
	}
	
	printf("%d", array_numbers[0]);
	return 0;
}
