#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int a[n - 1];
    rep(i, n - 1) cin >> a[i];

    int sv[n];
    rep(i, n) sv[i] = 0;

    rep(i, n - 1)
    {
        sv[a[i] - 1]++;
    }

    rep(i, n)
    {
        cout << sv[i] << endl;
    }
    return 0;
}
