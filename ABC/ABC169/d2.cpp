#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll soin(ll n)
{
    ll orgn = n;
    ll cnt = 0;
    ll a = 2;
    ll MX = 1e6 + 1;
    while (MX >= a)
    {
        if (n % a == 0)
        {
            n /= a;
            cnt++;
            cout<<a<<endl;
        }
        a++;
    }
    if (n == orgn && n>MX)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    ll n;
    cin >> n;
    cout << soin(n) << endl;
    return 0;
}
