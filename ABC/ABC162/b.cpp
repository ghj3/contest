#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            //
        }
        else if (i % 5 == 0)
        {
            //
        }
        else
        {
            res += i;
        }
    }
    cout << res << endl;

    return 0;
}
