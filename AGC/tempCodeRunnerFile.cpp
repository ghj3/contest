#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    ll ans = 0;
    ll ans2 = 0;
    if (a == b)
    {
        cout << ans << endl;
        return 0;
    }
    if (abs(a - b) % 2 == 1)
    {
        ans = min(max(abs(1 - a), abs(1 - b)), max(abs(n - a), abs(n - b)));
    }
    else
    {
        ans = abs(a - b) / 2;
    }
    cout << ans << endl;
    return 0;
}
