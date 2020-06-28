#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int ans = 0;
int n, m;
vector<ll> a;
vector<ll> b;
ll k;
void aaa(int c1, int c2)
{
    ll wkk = k;
    int cnt = 0;
    for (int i = 0; i < c1; ++i)
    {
        wkk -= a[i];
        cnt++;
    }
    for (int j = 0; j < c2; ++j)
    {
        wkk -= b[j];
        cnt++;
    }
    if (wkk >= 0)
    {
        ans = max(ans, cnt);
    }
}
int getc1()
{
    ll wk = k;
    int i = 0;
    int cnt = 0;
    wk -= a[i];
    while (wk > 0 && cnt < n)
    {
        cnt++;
        i++;
        wk -= a[i];
    }
    ans = max(ans, cnt);

    return cnt;
}
int getc2()
{
    ll wk = k;
    int i = 0;
    int cnt = 0;
    wk -= b[i];
    while (wk > 0 && cnt < m)
    {
        cnt++;
        i++;
        wk -= b[i];
    }
    ans = max(ans, cnt);
    return cnt;
}

int main()
{
    int c1 = 0;
    int c2 = 0;
    cin >> n >> m >> k;
    a = vector<ll>(n);
    b = vector<ll>(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    c1 = getc1();
    c2 = getc2();
    for (int i = 0; i <= c1; i++)
    {
        for (int j = 0; j <= c2; j++)
        {
            aaa(i, j);
        }
    }
    cout << ans << endl;
    return 0;
}
