#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
	int *x, *y;  // pointers
	int a, b;
	
	x = &a;  // reference 'a' memory location (example: 6422196)
	y = &b;  // reference 'b' memory location (example: 6422192)

	cout<<"a: ";cin>>a;  // get value of 'a'
	cout<<"b: ";cin>>b;  // get value of 'b'

	printf("a=%d, b=%d \n", &a, &b);  // example: a=6422196, b=6422192
	printf("x=%d, y=%d", *x, *y);  // example: x=2, y=3
	
	
	return 0;
}
