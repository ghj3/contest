#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    int n = 0;
    cin >> s;
    n = s.length();
    rep(i, n / 2)
    {
        if (s[i] != s[n - i - 1])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    string s1 = s.substr(0, (n - 1) / 2);
    string s2 = s.substr((n + 3) / 2 - 1);

    rep(i, s1.length() / 2)
    {
        if (s1[i] != s1[s1.length() - i - 1])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    rep(i, s2.length() / 2)
    {
        if (s2[i] != s2[s2.length() - i - 1])
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
