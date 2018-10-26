#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main(void) {
    string S;
    cin >> S;

    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());

    bool can = true;
    for (int i = 0; i < S.size();) {
        bool can2 = false;
        for (int j = 0; j < 4; j++) {
            if (S.substr(i, divide[j].size()) == divide[j]) {
                can2 = true;
                i += divide[j].size();
            }
        }

        if (can2==false) {
            can = false;
            break;
        }
    }

    if (can) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}
