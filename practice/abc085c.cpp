#include<iostream>

using namespace std;

int main(void) {

    int N, Y;
    int res10000 = -1, res5000 = -1, res1000 = -1;

    cin >> N >> Y;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N - i; j++) {
            int k = N - i - j;

            if (Y==i*10000 + j*5000 + k*1000) {
                res10000 = i;
                res5000 = j;
                res1000 = k;
            }

        }
    }

    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}
