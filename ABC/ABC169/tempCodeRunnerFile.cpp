#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int soin(int n)
{
    int cnt = 0;
    int a = 2;
    while (n >= a * a)
    {
        if (n % a == 0)
        {
            n /= a;
            cnt++;
        }
        else
        {
            a++;
        }
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    cout << soin(n) << endl;
    return 0;
}
