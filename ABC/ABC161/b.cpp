#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;
    int aa = 0;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
        aa += a[i];
    }
    int cnt = 0;
    rep(i, n)
    {
        if (a[i] * 4 * m >= aa)
        {
            cnt++;
        }
    }
    if (cnt >= m)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
