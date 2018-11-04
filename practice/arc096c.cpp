#include<iostream>

using namespace std;


int main (void) {
    int A, B, C, X, Y;

    cin >> A >> B >> C >> X >> Y;

    long int min = 10000000000000;
    long int temp = 0;

    for (int i = 0; i <= 100000; i++) {
        temp = i * 2*C;

        if (X > i) temp += (X - i) * A;
        if (Y > i) temp += (Y - i) * B;

        if ( temp < min) {
            min = temp;
        }
    }

    cout << min << endl;
}
