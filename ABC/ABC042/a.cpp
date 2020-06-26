#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int a5, b7, c5;

  if (a == 7)
  {
    b7 = a;
    a5 = b;
    c5 = c;
  }
  else if (b == 7)
  {
    b7 = b;
    a5 = a;
    c5 = c;
  }
  else if (c == 7)
  {
    b7 = c;
    a5 = a;
    c5 = b;
  }
  else
  {
    cout << "NO" << endl;
    return 0;
  }

  if (a5 == 5 && c5 == 5)
  {
    cout << "YES" << endl;
    return 0;
  }
  else
  {
    cout << "NO" << endl;
    return 0;
  }
  return 0;
}
