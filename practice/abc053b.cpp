#include<iostream>

using namespace std;

int main(void) {
    string s;
    int min = -1, max = -1;

    cin >> s;

    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == 'A' && min == -1) {
            min = i;
        }

        if (s[i] == 'Z') {
            max = i;
        }
    }

    cout << max - min + 1 << endl;
}
