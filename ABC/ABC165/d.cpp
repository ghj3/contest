#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<string> s;
    s.push_back("pon");
    s.push_back("pon");
    s.push_back("hon");
    s.push_back("bon");
    s.push_back("hon");
    s.push_back("hon");
    s.push_back("pon");
    s.push_back("hon");
    s.push_back("pon");
    s.push_back("hon");

    cout << s[n % 10] << endl;
    return 0;
}
