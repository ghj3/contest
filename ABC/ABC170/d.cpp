#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    vector<int> a;
    vector<int> aaa(1000010, 0);

    cin >> n;
    a = vector<int>(n);
    rep(i, n) cin >> a[i];
    for (int x : a)
    {
        if (aaa[x] != 0)
        {
            aaa[x] = 2;
            continue;
        }
        for (int j = x; j < 1000010; j += x)
        {
            aaa[j]++;
        }
    }
    int ans = 0;
    rep(i, n)
    {
        //    cout << aaa[a[i]] << endl;
        if (aaa[a[i]] == 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
