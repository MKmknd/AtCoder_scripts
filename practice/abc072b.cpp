#include<iostream>

using namespace std;

int main(void) {

    string s;

    cin >> s;

    for (int i = 1; i < s.length() + 1; i++) {
        if (i % 2 == 1) {
            //output.push_back(s[i]);
            cout << s[i-1];
        }
    }
    cout << endl;

}
