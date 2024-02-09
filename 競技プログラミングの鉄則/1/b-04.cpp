#include <iostream>
#include <string>
using namespace std;
 
int main() {
	string N;
	cin >> N;
	
	int Answer = 0;
	for (int i = 0; i < N.size(); i++) {
    if (N[i] == '1') {
      Answer += (1 << (N.size() - 1 - i));
    }
	}
	
	cout << Answer << endl;
	return 0;
}
