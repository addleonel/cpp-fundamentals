#include <iostream>

float circle_area(float);  // Function forward declaration 

int main() {
    std::cout << "The area of a circle of radius 5 is " << circle_area(5.4) << "\n";  // Function call
    return 0;
}

float circle_area(float radius) {  // Function definition
    return 3.14 * radius * radius;
}