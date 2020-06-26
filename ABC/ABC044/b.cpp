#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string n;
    cin >> n;
    int d[26];
    rep(i, 26) d[i] = 0;
    for (int i = 0; i < n.length(); i++)
    {
        d[n[i] - 'a']++;
    }

    rep(i, 26)
    {
        if (d[i] % 2 == 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
