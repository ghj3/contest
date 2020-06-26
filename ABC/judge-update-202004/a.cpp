#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int s, l, r, x;
    cin >> s >> l >> r;
    x = s;
    while (true)
    {
        if (x < l)
        {
            x++;
        }
        else if (x > r)
        {
            x--;
        }
        else
        {
            cout << x << endl;
            return 0;
        }
    }
}
