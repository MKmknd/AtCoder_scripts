#include<iostream>
using namespace std;

int main(void) {
    int N, A;
    int large, small;

    cin >> N;
    cin >> A;

    large = N % 500;

    if (large==0) {
        cout << "Yes" << endl;
    }
    else {
        if (large <= A) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}
