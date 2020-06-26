#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    string abc = "zabcdefghijklmnopqrstuvwxyz";
    cin >> n;
    ll N = 26;
    ll M = 26;
    int cnt = 1;
    string op = "";

    for (int i = 1; i <= 10; i++)
    {
        if (n <= M)
        {
            break;
        }
        N *= 26;
        M += N;
        cnt++;
    }
    N = pow(26, cnt);
    cout << N << ":" << cnt << endl;
    for (int i = 0; i < cnt; i++)
    {
        ll a;
        if (n <= N)
        {
            a = n;
        }
        else
        {
            a = n / N;
        }
        n = n % N;
        op += abc[a];
        N /= 26;
    }
    cout << op << endl;
    return 0;
}
