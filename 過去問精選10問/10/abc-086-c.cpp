#include<iostream>
#include<math.h>
using namespace std;

// TODO: やり直す
int main() {
    int N;
    cin >> N;
    int t[N], x[N], y[N];
    t[0] = x[0] = y[0] = 0;
    for (int i = 0; i < N; ++i) cin >> t[i+1] >> x[i+1] >> y[i+1];

    bool can = true;
    for(int i = 0; i < N; i++) {
        int dt = t[i+1] - t[i];
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        if (dt < dist) can = false;
        if (dt % 2 != dist % 2) can = false;
    }

    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
}
