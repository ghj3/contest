#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int aaa(int k){
    if (k==1){
        return 1;
    }
    return k*aaa(k-1);
}
int main()
{
    int n;
    cin >> n;
    int ans=aaa(n);
    cout << ans << endl;
    return 0;
}
