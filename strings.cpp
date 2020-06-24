#include <iostream>
#include <string>
using namespace std;


int main() {
	string a, b;
    cin >> a;
    cin >> b;

    // calculate size
    const int size_a = a.size();
    const int size_b = b.size();

    // concatenate
    const string conate_a_b = a + b;

    // swap
    const char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    // Output
    cout << size_a << " " << size_b << endl;
    cout << conate_a_b << endl;
    cout << a << " " << b << endl;
  
    return 0;
}