#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    double PI = acos(-1);
    int a, b, h, m;
    cin >> a >> b >> h >> m;

    double c = 30 * h + 0.5 * m;
    double d = 6 * m;
    double e = abs(c - d);
    if (e > 180)
    {
        e = 360 - e;
    }
    double radian = e * PI / 180.0;
    double ans = sqrt(b * b + a * a - 2 * b * a * cos(radian));
    printf("%.20f\n", ans);
    return 0;
}
