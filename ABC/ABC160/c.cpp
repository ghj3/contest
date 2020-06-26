#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int k, n;
    cin >> k >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    int m = 0;
    m = k - a[n - 1] + a[0];
    rep(i, n - 1)
    {
        m = max(m, a[i + 1] - a[i]);
    }
    cout << k - m << endl;
    return 0;
}
