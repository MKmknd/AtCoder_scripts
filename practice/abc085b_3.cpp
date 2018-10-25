#include<iostream>
#include<map>

using namespace std;

int main(void) {

    int N;
    int d[100] = {0};

    cin >> N;
    for (int i = 0; i < N; i++) cin >> d[i];

    map<int,int> values;

    for (int i = 0; i < N; i++) {
        values[d[i]] = 1;
    }

    cout << values.size() << endl;

    for (map<int,int>::iterator itr = values.begin(); itr != values.end(); itr++) {
        cout << itr->first << " and " << itr->second << endl;
    }



}
