#include<iostream>

using namespace std;

int main(void) {
    string s;
    int count = 0;

    cin >> s;

    for (int i; i<s.size(); i++) {
        if (s[i]=='o') {
            count += 1;
        }
    }

    cout << 700+count*100 << endl;
}
