#include<iostream>
#include<algorithm>

using namespace std;

int main(void) {

    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A, A+N);
    if (N==2) {
        cout << abs(A[0] - A[1]) << endl;
    }
    else {

        int B[N];
        B[0] = -1;
        for (int i = 1; i < N-1; i++) {
            if ((i % 2) == 0 ) {
                B[N-1] = 1;
                B[i] = -2;
            }
            else {
                B[N-1] = -1;
                B[i] = 2;
            }
        }
        sort(B, B+N);

        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += A[i]*B[i];
        }

        int C[N];
        C[0] = 1;
        for (int i = 1; i < N-1; i++) {
            if ((i % 2) == 0 ) {
                C[i] = 2;
                C[N-1] = -1;
            }
            else {
                C[i] = -2;
                C[N-1] = 1;
            }
        }
        sort(C, C+N);

        int sum2 = 0;
        for (int i = 0; i < N; i++) {
            sum2 += A[i]*C[i];
        }

        if (sum2>sum) {
            cout << sum2 << endl;
        }
        else {
            cout << sum << endl;
        }

    }


}
