#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll l;
    cin >> l;
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    if (l % 3 == 0)
    {
        a = l / 3;
        b = a;
        c = a;
        printf("%.12f\n", a * b * c);
        return 0;
    }
    if (l % 3 == 1)
    {
        l--;
        a = l / 3;
        a += 0.3333333333;
        b = a;
        c = l / 3;
        c += 0.3333333334;

        printf("%.12f\n", a * b * c);
        return 0;
    }
    if (l % 3 == 2)
    {
        l--;
        l--;
        a = l / 3;
        a += 0.6666666667;
        b = a;
        c = l / 3;
        c += 0.6666666666;

        printf("%.12f\n", a * b * c);
        return 0;
    }

    return 0;
}
