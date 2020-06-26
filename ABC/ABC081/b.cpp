#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;
    bool flg = true;
    while (true)
    {
        rep(i, n)
        {
            if (a[i] % 2 == 1)
                flg = false;
        }
        if (flg)
        {
            ans++;
            rep(i,n){
                a[i]/=2;
            }
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
