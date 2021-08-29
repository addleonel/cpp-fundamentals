#include <iostream>
#include <vector>
#include <sstream>

int main() {
	int n, e_num, x, start_, end_;
	std::string range;
	std::cin >> n;

	std::vector<int> nums; 
	for(int i=0; i<n; i++){
		std::cin >> e_num;
		nums.push_back(e_num);
	}
	
	std::cin >> x;

	nums.erase(nums.begin()+(x-1));
		
	std::cin >> start_>> end_;

	nums.erase(nums.begin()+(start_-1), nums.begin()+(end_-1));
	
	std::cout << nums.size() << std::endl;
	for(int k=0; k< nums.size(); k++){
		std::cout<< nums[k] << " ";
	}
	return 0;
}
