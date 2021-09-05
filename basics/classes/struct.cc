#include <iostream>
#include <sstream>

int main() {
	struct Student{
		int age;
		std::string first_name;
		std::string last_name;
		int standard;
	};

	Student you;

	std::cin >> you.age;
	std::cin >> you.first_name;
	std::cin >> you.last_name;
	std::cin >> you.standard;

	std::cout << you.age << " " << you.first_name << " " << you.last_name<< " " << you.standard << std::endl;
	return 0;
}
