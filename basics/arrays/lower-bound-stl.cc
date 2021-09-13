#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    /*
    References:
    - https://www.cplusplus.com/reference/algorithm/lower_bound/
    - https://www.cplusplus.com/reference/algorithm/sort/
    */
    int count, queries;
    cin >> count;
    vector<int> sorted_numbers;

    for (int i=0; i<count; i++){
        int number;
        cin >> number;
        sorted_numbers.push_back(number);
    }

    sort(sorted_numbers.begin(), sorted_numbers.end());

    cin >> queries;

    for (int q=0; q<queries; q++) {
        int query;
        vector<int>::iterator low;
        cin >> query;
        low = lower_bound(sorted_numbers.begin(), 
                        sorted_numbers.end(),
                        query);
        if (sorted_numbers[low - sorted_numbers.begin()] == query) {
 
            cout << "Yes " << low - sorted_numbers.begin() + 1 <<endl;
            
        }else {
            
            cout << "No " << low - sorted_numbers.begin() + 1 <<endl;
        }
        

    }

    return 0;
}
