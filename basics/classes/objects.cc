#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <sstream>
using namespace std;

// Write your Student class here

class Student {
    vector<int> scores;
    public:
        void input();
        int calculateTotalScore();
};

void Student::input() {
    int s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    scores.push_back(s1);
    scores.push_back(s2);
    scores.push_back(s3);
    scores.push_back(s4);
    scores.push_back(s5);
}

int Student::calculateTotalScore() {
    int total = 0;
    for (int i=0; i<scores.size(); i++) {
        total += scores[i];
    }
    return total;
}


int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
