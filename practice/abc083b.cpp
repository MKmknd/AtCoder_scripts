#include<iostream>

using namespace std;


int findSumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(void) {

    int N, A, B;
    int res = 0, sum;

    cin >> N >> A >> B;

    for (int i = 1; i <= N; i++) {
        sum = findSumOfDigits(i);
        
        if (sum>=A && sum <= B) {
            res += i;
        }
    }
    cout << res << endl;
}
