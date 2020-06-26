#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, l;
    cin >> n >> l;
    vector<string> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    rep(i, n) cout << a[i];
    cout << endl;
    return 0;
}
