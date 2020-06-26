#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, k;
    cin >> n >> k;
    int d[k];
    rep(i, k) cin >> d[i];

    for (int i = n;; i++)
    {
        bool isok = true;
        string s = to_string(i);
        rep(j, s.size())
        {
            rep(a, k)
            {
                if (s[j] - '0' == d[a])
                {
                    isok = false;
                    goto loopend;
                }
            }
        }
    loopend:
        if (isok)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
