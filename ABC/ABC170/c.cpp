#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int x, n;
    cin >> x >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    int dif = 0;
    while (true)
    {
        bool fmin = true;
        bool fmax = true;
        rep(i, n)
        {
            if (p[i] == (x - dif))
            {
                fmin = false;
            }
            if (p[i] == (x + dif))
            {
                fmax = false;
            }
        }
        if (fmin)
        {
            cout << (x - dif) << endl;
            return 0;
        }
        if (fmax)
        {
            cout << (x + dif) << endl;
            return 0;
        }
        dif++;
    }
    cout << (x - dif) << endl;
    return 0;
}
