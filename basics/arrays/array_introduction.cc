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

	int amount, value, counter;
	std::cout<<"Amount:"; std::cin>>amount;
	int array_numbers[amount];
	int index;
	while (amount > 0){
		index = amount -1;
		std::cin>>value;
		array_numbers[index] = value;
		std::cout <<"index="<<index<<"value="<<value<< std::endl;
		amount -= 1;
	}
	
	std::cout<<"print items: "<<array_numbers[0];
	for(int i=0; i<amount; i++){
		std::cout<< array_numbers[i];
	}

	return 0;
}
