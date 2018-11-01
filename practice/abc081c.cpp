#include<iostream>
#include<algorithm>

using namespace std;

int main (void) {

    int N, K;

    cin >> N >> K;

    int A[N];
    int backet[200000] = {0};
    for (int i = 0; i < N; i++) cin >> A[i];


    for (int i = 0; i < N; i++) {
        backet[A[i]]++;
    }

    sort(backet, backet + 200000);

    int sum = 0;
    for (int i = 200000-K; i < 200000; i++) {
        sum += backet[i];
    }

    cout << N - sum << endl;
}
