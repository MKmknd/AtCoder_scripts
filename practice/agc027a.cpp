#include<iostream>

using namespace std;

int main(void) {
    int N, x;
    int a[100];

    cin >> N >> x;
    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a, a + N);

    if (x < a[0]) {
        cout << 0 << endl;
    }
    else {
        int cnt = 0;

        for (int i = 0; i < N; i++) {
            if (x >= a[i]) {
                x = x - a[i];
                cnt++;
            }
            else {
                break;
            }
        }

        if (x != 0) {
            cout << cnt - 1 << endl;
        }
        else {
            cout << cnt << endl;
        }
    }
}
