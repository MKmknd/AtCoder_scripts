#include<iostream>

using namespace std;

int main(void) {
    int N, max = 0;
    long int min = 10000000000;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++) {
        if (A[i] > max) {
            max = A[i];
        }
        if (A[i] < min) {
            min = A[i];
        }
    }

    cout << max - min << endl;
}
