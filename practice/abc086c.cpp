#include<iostream>

using namespace std;


int main(void) {
    int N;
    int x[100010], y[100010], t[100010];

    cin >> N;
    t[0] = x[0] = y[0] = 0;
    for (int i=1; i < N+1; i++) cin >> t[i] >> x[i] >> y[i];

    bool can = true;
    for (int i = 0; i < N; i++) {
        int dt = t[i+1] - t[i];
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);

        if (dt < dist) {
            can = false;
        }
        if (dist % 2 != dt % 2) {
            can = false;
        }
    }

    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
}
