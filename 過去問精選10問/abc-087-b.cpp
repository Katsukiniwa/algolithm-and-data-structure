#include<iostream>
using namespace std;

int main() {
    int A, B, C, X;
    int result = 0;
    cin >> A >> B >> C >> X;
    for(int i = 0; i <= A; i++) {
        for(int j = 0; j <= B; j++) {
            int tmp = 500 * i + 100 * j;
            int res = X - tmp;
            if (res / 50 >= 0 && res / 50 <= C) {
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;
}
