#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a>>b;
    string s = "";
    for (int i=0;i<a;++i) {
        s+=to_string(b);
    }
    string t = "";
    for (int i=0;i<b;++i) {
        t+=to_string(a);
    }

    if (s < t) {
        cout << s << endl;
    } else {
        cout << t << endl;
    }
    return 0;
}
