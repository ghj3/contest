#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;

int a[12][12];

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    rep(i, n)
    {
        cin >> c[i];
        rep(j, m) cin >> a[i][j];
    }

    int ans = INF;
    int MX = pow(2, n);
    for (int s = 1; s < MX; ++s)
    {
        int cost = 0;
        vector<int> skil(m, 0);
        rep(i, n)
        {
            if (s >> i & 1)
            {
                cost += c[i];
                rep(j, m) skil[j] += a[i][j];
            }
        }
        bool ok = true;
        rep(k, m) if (skil[k] < x) ok = false;
        if (ok)
        {
            ans = min(cost, ans);
        }
    }
    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}
