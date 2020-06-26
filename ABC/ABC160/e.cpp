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
    ll ans=0;
    int k=a-1;
    int l=b-1;
    int m=c-1;
    for (int i=0; i < x; i++){
        if (m<0 || pa[k]>= ra[m]){
            ans+=pa[k];
            k--;
        } else {
            ans+=ra[m];
            m--;
        }
    }
    for (int i=0;i<y;i++){
        
    }    
    return 0;
}
