#include<iostream>

using namespace std;

int main(void) {

    int A, B, C, X;
    int total = 0;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;

    for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
            for (int k = 0; k <= C; k++) {
                if ((500*i + 100*j + 50*k) == X) {
                    total++;
                }
            }
        }
    }
    cout << total << endl;
}
