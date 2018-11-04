#include<iostream>
#include <cmath>

using namespace std;

int main (void) {

    int N, T, A;
    int H[1010];

    cin >> N;
    cin >> T >> A;
    for (int i = 0; i < N; i++) cin >> H[i];


    double temp = 100000;
    double diff = 100000;
    int max = 0;

    for (int i = 0; i < N; i++) {
        temp = T - (double)(H[i]*0.006);

        //cout << fabs(diff - A) << endl;
        //cout << fabs(temp - A) << endl;
        if (fabs(diff-A) > fabs(temp-A)) {
            diff = temp;
            max = i + 1;
        }
    }

    cout << max << endl;

}
