#include<iostream>


using namespace std;

int main (void) {
    int c[3][3];
    int a1=0, a2,a3,b1,b2,b3;

    for (int i = 0; i < 3; i++) {
        cin >> c[i][0] >> c[i][1] >> c[i][2];
    }

    b1 = c[0][0] - a1;
    b2 = c[1][0] - a1;
    b3 = c[2][0] - a1;

    int temp[3] = {0};
    bool flag = true;

    temp[0] = c[0][1] - b1;
    temp[1] = c[1][1] - b2;
    temp[2] = c[2][1] - b3;

    if (temp[0] != temp[1] || temp[1] != temp[2] || temp[2] != temp[0]) {
        flag = false;
    }

    temp[0] = c[0][2] - b1;
    temp[1] = c[1][2] - b2;
    temp[2] = c[2][2] - b3;

    if (temp[0] != temp[1] || temp[1] != temp[2] || temp[2] != temp[0]) {
        flag = false;
    }

    if (flag) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}
