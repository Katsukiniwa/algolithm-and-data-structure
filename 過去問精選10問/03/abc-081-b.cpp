#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int result = 0;
    while(true) {
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                cout << result << endl;
                return 0;
            }
            A[i] = A[i] / 2;
        }
        result++;
    }
}
