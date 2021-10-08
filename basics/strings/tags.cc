#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>

// using namespace std;

int main(){
	std::string get_numbers;
	int n, q;
	std::vector<std::string> HRML_;
	std::vector<std::string> query;
	getline(std::cin, get_numbers);
	std::stringstream ss(get_numbers);
	ss >> n >> q;
	
	std::cout << n <<std::endl;
	std::cout << q << std::endl;
	
	for (int i=0; i<n; i++){
		std::string HRML_line;
		std::string temp_string;
		char ch;
		std::string tag_name;
		std::string attr_name;
		std::string value_name;
		
		getline(std::cin, HRML_line);
		std::stringstream ss(HRML_line);
		HRML_.push_back(HRML_line);
	}

	for (int j=0; j<q; j++){
		std::string query_line;
		getline(std::cin, query_line);
		query.push_back(query_line);
	}
	
	// string step_query;
	for (int i=0; i < query.size(); i++){
		std::cout<< "->" << query[i] <<std::endl;
		
		
	}
	//getline(std::cin, )
	
	return 0;
}
