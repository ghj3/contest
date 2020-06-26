#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    vector<int> pa(a);
    vector<int> qa(b);
    vector<int> ra(c);
    rep(i, a) cin >> pa[i];
    rep(i, b) cin >> qa[i];
    rep(i, c) cin >> ra[i];
    sort(pa.begin(), pa.end());
    sort(qa.begin(), qa.end());
    sort(ra.begin(), ra.end());
    //    sort(q.end(), q.begin());
    //    sort(r.end(), r.begin());
    rep(i, a)
    {
        cout << pa[i] << endl;
    }
    rep(i, b)
    {
        cout << qa[i] << endl;
    }
    rep(i, c)
    {
        cout << ra[i] << endl;
    }
    return 0;
}
