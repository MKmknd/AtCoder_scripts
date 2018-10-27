#include<iostream>
#include<algorithm>

using namespace std;

int main(void) {

    string S;
    cin >> S;

    if (S.length()==2) {
        cout << S << endl;
    }
    else if (S.length()==3) {
        for (int i = S.length()-1; i >= 0; i--) {
            cout << S[i];
        }
        cout << endl;
    }
}
