#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, ave = 0, ans = 0;
    double sum = 0;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, n) sum += a[i];
    if (sum < 0)
    {
        ave = (sum / n - 0.5);
    }
    else
    {
        ave = (sum / n + 0.5);
    }
    rep(i, n) ans += (a[i] - ave) * (a[i] - ave);
    cout << ans << endl;
    return 0;
}
