#include <iostream>
#include <vector>
#include <sstream>

/*
	Operator >> Extracts formatted data.
	Operator << Inserts formatted data.
	Method str() Gets the contents of underlying string device object.
	Method str(string) Sets the contents of underlying string device object.
*/

int main(){
	std::string message;
	int num;
	char ch_comma;
	std::vector<int> vector_numbers;
	getline(std::cin, message);
	std::stringstream ss(message);
	
	while(ss >> num >> ch_comma)
		vector_numbers.push_back(num);

	ss >> num >> ch_comma;
	vector_numbers.push_back(num);

	for(auto i = vector_numbers.begin(); i != vector_numbers.end();++i)
		std::cout<< *i << std::endl;

	return 0;
}
