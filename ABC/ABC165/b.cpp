#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll x;
    int y = 0;
    cin >> x;
    ll ans = 100;
    while (x > ans)
    {
        ans *= 1.01;
        y++;
    }
    cout << y << endl;
    return 0;
}
