#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll m = 0;

    m = n;
    m = min(m, n % k);
    m = min(m, k - n % k);
    cout << m << endl;

    return 0;
}
