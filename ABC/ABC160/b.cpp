#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll x;
    ll ans = 0;
    ll ans5 = 0;
    cin >> x;
    ans = (x / 500);
    x = x - (ans * 500);
    ans5 = x / 5;
    cout << ans*1000 + ans5*5 << endl;
    return 0;
}
