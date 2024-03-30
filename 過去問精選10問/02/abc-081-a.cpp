#include<iostream>
using namespace std;

int main () {
    string s;
    int result = 0;
    cin >> s;
    for(int i= 0; i < s.size(); i++) {
        if (s[i] == '1') {
            result += 1;
        }
    }
    cout << result << endl;
}
