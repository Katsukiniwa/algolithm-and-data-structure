#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

// TODO: やり直す
int main() {
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    for(int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());
    
    bool can = true;
    for(int i = 0; i < S.size();) {
        cout << i << endl;
        bool can2 = false;
        for(int j = 0; j < 4; j++) {
            string d = divide[j];
            cout << "i: " << i << " " <<S.substr(i, d.size())<< endl;
            if(S.substr(i, d.size()) == d) {
                can2 = true;
                i += d.size();
            }
        }
        if (!can2) {
            can = false;
            break;
        }
    }
    
    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
}
