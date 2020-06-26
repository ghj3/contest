#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, a, ans =0;
    cin >> h>>a;
    ans=h/a;
    if (h % a !=0) ans++;
    cout << ans << endl;
    return 0;
}
