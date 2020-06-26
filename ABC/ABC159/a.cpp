#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m;
    int ans = 0;
    cin >> n >> m;
    //if (m % 2 == 1)
    //{
    //    m--;
    //}
    ans = n * (n - 1) / 2;
    ans += m * (m - 1) / 2;

    cout << ans << endl;
    return 0;
}
