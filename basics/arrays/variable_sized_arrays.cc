#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	string nq_;
	string numbers;
	string queries;
	int i_q, j_q;
	int each_number;
	int n;
	int q;
	vector<int> vector_k;
	vector<vector<int>> matrix;
	getline(cin, nq_);
	stringstream ss(nq_);
	
	ss >> n;
	ss >> q;
	
	// cout<< n << " " << q;
	
	for (int i=0; i<n; i++) {
		getline(cin, numbers);
		stringstream ss_numbers(numbers);
		ss_numbers >> each_number;
		while(ss_numbers >> each_number){
			vector_k.push_back(each_number);
		}
		matrix.push_back(vector_k);
		vector_k.clear();
	}	
	
	vector<int> results;
	for (int k=0; k<q; k++){
		getline(cin, queries);
		stringstream ss_query(queries);
		ss_query >> i_q;
		ss_query >> j_q;
		results.push_back(matrix[i_q][j_q]);	
	}

	for (int h=0; h<results.size(); h++){
		cout << results[h] << endl;
	}	

	return 0;
}


