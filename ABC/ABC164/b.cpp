#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int takahashi = a / d;
    if (a % d > 0)
    {
        takahashi++;
    }
    int aoki = c / b;
    if (c % b > 0)
    {
        aoki++;
    }

    if (takahashi >= aoki)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
