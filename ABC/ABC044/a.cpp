#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int ans = 0;
    int m = 0;
    m = min(n, k);
    ans = m * x + (n - m) * y;
    cout << ans << endl;
    return 0;
}
