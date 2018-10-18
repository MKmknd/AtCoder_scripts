#include<iostream>

using namespace std;

int main(void) {
    int N, ans=1;
    cin >> N;

    for (int i = 1; i <= N; i=i*2) {
        ans = i;
    }

    cout << ans << endl;
}
