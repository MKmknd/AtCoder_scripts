#include<iostream>

using namespace std;

int main(void) {
    string s;
    int size = 0;
    cin >> s;

    size = s.size();

    cout << s[0] << size-2 << s[size-1] << endl;
}
