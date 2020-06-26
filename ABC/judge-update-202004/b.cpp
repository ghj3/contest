#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a, b,c,d;
    cin >> a>>b>>c>>d;
    vector<int> reda(n);
    vector<int> bluea(n);
    //    int reda[n];
    //    int bluea[n];
    int b = 0;
    int r = 0;
    rep(i, n)
    {
        reda[i] = 10010;
        bluea[i] = 10010;
    }

    rep(i, n)
    {
        cin >> w >> c;
        if (c == "B")
        {
            bluea[b] = w;
            b++;
        }
        else
        {
            reda[r] = w;
            r++;
        }
    }
    sort(reda.begin(), reda.end());
    sort(bluea.begin(), bluea.end());

    rep(i, r )
    {
        cout << reda[i] << endl;
    }
    rep(i, b )
    {
        cout << bluea[i] << endl;
    }

    return 0;
}
