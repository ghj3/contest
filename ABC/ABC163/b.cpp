#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int m, n;
    cin >> m >> n;
    int aa[n];
    rep(i, n) cin >> aa[i];

    int cnt = 0;
    rep(i, n)
    {
        cnt += aa[i];
    }
    int res = m - cnt;

    if (res < 0)
    {
        res = -1;
    }
    cout << res << endl;

    return 0;
}
