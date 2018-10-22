#include<iostream>

using namespace std;

int main(void) {
    int N, X;
    int min = 10000;
    
    cin >> N >> X;

    int m[N];
    int count = N;

    for (int i = 0; i < N; i++) cin >> m[i];

    for (int i = 0; i < N; i++) {
        X -= m[i];
        if (m[i] < min) {
            min = m[i];
        }
    }

    count += int(X/min);

    cout << count << endl;

}
