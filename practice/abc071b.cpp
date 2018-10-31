#include<iostream>

using namespace std;

int main (void) {

    string S;
    bool a[26] = {false};
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        a[S[i] - 'a'] = true;
    }

    int flag = 0;
    for (int i = 0; i < 26; i++) {
        if (a[i] == false) {
            cout << (char)('a' + i) << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        cout << "None" << endl;
    }

}
