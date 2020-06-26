#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 入力
int n,cnt;
int value[110];

// DPテーブル
int dp[110][10010];

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> value[i];

    // DP初期条件: dp[0][w] = 0
    for (int w = 0; w <= W; ++w)
        dp[0][w] = 0;

    // DPループ
    max=value[0];
    dp[1][1]=value[0];

    max=max(max,value[1]);
    dp[2][1]=value[1];

    max=max(max,value[3]);
    dp[3][1]=value[2];

    
    dp[4][2]=
    dp[0][1]=value[0];
    dp[1][0]=0;
    dp[1][1]=value[1];
    dp[2][0]=0;
    dp[2][1]=value[2];
    dp[2][2]=dp[1][1]+value[2];

    for (int i = 2; i < n; ++i)
    {
        dp[i][0]=0;
        dp[i][1]=value[i];
        dp[i][2]=dp[i-2][1]+value[i];
        dp[i][3]=dp[i-2][2]+value[i];
        cnt =i-2
        dp[i][]
        for (int w = 0; w <= W; ++w)
        {
            if (w >= weight[i])
                dp[i + 1][w] = max(dp[i][w - weight[i]] + value[i], dp[i][w]);
            else
                dp[i + 1][w] = dp[i][w];
        }
    }

    cout << dp[n][W] << endl;
}