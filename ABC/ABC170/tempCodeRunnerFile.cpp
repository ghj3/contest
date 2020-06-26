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
    // sort(a.end(), a.begin());
    rep(i, n)
    {
        //        if (aaa[a[i]] == 0)
        //        {
        for (int j = a[i]; j < 1000010; j += a[i])
        {
            aaa[j] += 1;
        }
        //        }
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
