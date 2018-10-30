#include<iostream>

using namespace std;

int main (void) {
    int N;
    cin >> N;

    int a[3*N];
    for (int i = 0; i < 3*N; i++) cin >> a[i];

    sort(a, a + 3*N);
    
    long int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += a[3*N - 2 - 2*i];
    }

    cout << sum << endl;
}
