#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    ll ans = 1;
    ll a[n];
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    rep(j, n)
    {
        if (a[j] > 1000000000000000000 / ans)
        {
            cout << -1 << endl;
            return 0;
        }
        ans *= a[j];
    }
    cout << ans << endl;
    return 0;
}
