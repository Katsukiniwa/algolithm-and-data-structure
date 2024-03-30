#include<iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    int result = 700;
    for(int i = 0; i < S.size(); i++) {
        if (S[i] == 'o') {
            result += 100;
        }
    }

    cout << result << endl;
}
