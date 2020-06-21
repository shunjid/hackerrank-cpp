#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    const vector<std::string> numbers {
        "one", "two", "three", "four", "five", 
        "six", "seven", "eight", "nine"
    };
    int min_range, max_range;
    cin >> min_range >> max_range;

    for(int i=min_range; i<=max_range; i++) {
        if(i > 9) {
            (i%2 == 0) ? cout << "even" << endl : cout << "odd" << endl;
        } else {
            cout << numbers.at(i-1) << endl;
        }
    }

    return 0;
}