#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;

int a[12][12];

int main()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n, -1);
    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        t -= 1;
        a[i] = t;
    }
    int s = 0;
    int x = 0, y = 0;
    rep(i, n)
    {
        if (b[s] == -1)
        {
            b[s] = i;
        }
        else
        {
            x = i - b[s];
            y = b[s];
            break;
        }
        s = a[s];
    }
    int ans;
    int pos = 0;
    if (k < y)
    {
        pos = k;
    }
    else
    {
        pos = ((k - y) % x) + y;
    }
    s = 0;
    for (int i = 0; i < pos; ++i)
    {
        s = a[s];
    }
    ans = s;
    ans++;
    cout << ans << endl;
    return 0;
}
