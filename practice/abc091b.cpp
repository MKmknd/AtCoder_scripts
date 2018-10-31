#include<iostream>
#include<map>

using namespace std;


int main (void) {
    map<string, int> mp;
    int N, M;
    string a;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a;
        map<string, int>::iterator itr = mp.find(a);
        if (itr != mp.end()) {
            mp[a]++;
        }
        else {
            mp[a] = 1;
        }
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> a;
        map<string, int>::iterator itr = mp.find(a);
        if (itr != mp.end()) {
            mp[a]--;
        }
        else {
            mp[a] = -1;
        }
    }

    map<string, int>::iterator itr;
    int max = 0;
    for (itr = mp.begin(); itr != mp.end(); itr++) {
        if (itr->second > max) {
            max = itr->second;
        }
    }

    cout << max << endl;

}
