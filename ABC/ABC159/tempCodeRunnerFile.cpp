#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int dp[10];
    rep(i, 10)
    {
        dp[i] = 0;
    }
    rep(i, n)
    {
        cin >> a[i];
        dp[a[i]]++;
    }
    rep(i, n)
    {
        int ans = 0;
        rep(j, 10)
        {
            int wk = dp[j];
            if (wk > 1)
            {
                if (j == a[i])
                    wk--;
                ans += wk * (wk - 1) / 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
