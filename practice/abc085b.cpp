#include<iostream>

using namespace std;

int main(void) {

    int N;
    int d[100] = {0};

    cin >> N;
    for (int i = 0; i < N; i++) cin >> d[i];

    int num[101] = {0};

    for (int i = 0; i < N; i++) {
        num[d[i]] += 1;
    }

    int res = 0;
    for (int i = 1; i <= 100; i++) {
        if (num[i]) {
            res += 1;
        }
    }

    cout << res << endl;

}
