#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A + N, greater<int>());
    int result = 0;
    for(int i = 0; i < N; i++) {
        if (i == 0) {
            result++;
        } else {
            if (A[i] != A[i - 1]) {
                result++;
            }
        }
    }

    cout << result << endl;
}
