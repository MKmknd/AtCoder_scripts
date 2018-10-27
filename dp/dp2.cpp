#include<iostream>
#include<algorithm>

using namespace std;

int n, W;
int weight[110], value[110];

int dp[110][10010];


int main(void) {

    cin >> n >> W;
    for (int i = 0; i < n; i++) cin >> value[i] >> weight[i];

    for (int i = 0; i <= W; i++) dp[0][i] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= W; j++) {
            if (j >= weight[i]) dp[i+1][j] = max(dp[i][j-weight[i]]+value[i], dp[i][j]);
            else dp[i+1][j] = dp[i][j];
        }
    }
    cout << dp[n][W] << endl;
}
