#include<iostream>

using namespace std;


int main(void) {
    int N;
    int A[200];
    int flag=1, count = 0;

    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];

    while (flag) {
        for (int i=0; i<N; i++) {
            if (A[i] % 2 == 0) {
                A[i] = A[i]/2;
            }
            else {
                flag = 0;
            }

            if (i==N-1 && flag==1) {
                count += 1;
            }
        }
    }

    cout << count << endl;
}
