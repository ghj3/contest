#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  // set<int> s;
  // rep(i,n) s.insert(a[i]);
  // if (s.size() == n) cout << "YES" << endl;
  // else cout << "NO" << endl;
  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());
  if (a.size() == n) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
