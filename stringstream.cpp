#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> numbers;
    stringstream stream(str);

    // extract one by one to temp
    for(int temp; stream >> temp;) {
        numbers.push_back(temp);

        if(stream.peek() == ',')
            stream.ignore();
    }

    return numbers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
// https://stackoverflow.com/questions/1894886/parsing-a-comma-delimited-stdstring