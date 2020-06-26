#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[n-1];
    rep (i,n-1) a[i]=0;
    x--;
    y--;
    rep(i, n-1)
    {
        int a=0;
        int b=0;
        for (int j=0; j < i+1;j++){
        while (a < n && b <n){
            if (a==x){

            } else {
                a[i]++;
                a++;
            }
        }
        }
            if (j==x) {

            } else {
                a[i]++;
            }
        }
        a[i] = n - (i + 1);
    }
    rep(i, n - 1)
    {
        cout << a[i] << endl;
    }
    return 0;
}
