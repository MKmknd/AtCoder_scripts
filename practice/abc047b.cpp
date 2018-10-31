#include<iostream>

using namespace std;


int main (void) {

    int W, H, N;
    int x[110], y[110], a[110];


    cin >> W >> H >> N;
    for (int i = 0; i < N; i++) cin >> x[i] >> y[i] >> a[i];

    int xmin = 0, xmax = W, ymin = 0, ymax = H;

    for (int i = 0; i < N; i++) {
        switch (a[i]) {
            case 1:
                if (xmin < x[i]) xmin = x[i];
                break;
            case 2:
                if (xmax > x[i]) xmax = x[i];
                break;
            case 3:
                if (ymin < y[i]) ymin = y[i];
                break;
            case 4:
                if (ymax > y[i]) ymax = y[i];
                break;
        }
    }

    if (xmax > xmin && ymax > ymin) {
        cout << (xmax - xmin) * (ymax - ymin) << endl;
    }
    else {
        cout << 0 << endl;
    }
}
