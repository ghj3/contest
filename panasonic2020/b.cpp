#include <bits/stdc++.h>

using namespace std;

int main() {
    long h;
    long w;
    cin >> h >> w;
    if (min(h,w)==1) {
        cout << 1 << endl;
    } else {
        long ans = h * w / 2;
        if (h * w % 2 == 1) ans++;
        cout << ans << endl;
    }
    return 0;
}
