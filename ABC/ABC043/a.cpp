#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, ans = 0;
    cin >> n;
    rep(i, n) ans += i + 1;

    cout << ans << endl;
    return 0;
}
