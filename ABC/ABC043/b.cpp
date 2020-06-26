#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;
    int i;
    stack<char> st;
    int len = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
        {
            if (len != 0)
            {
                st.pop();
                len--;
            }
        }
        else
        {
            st.push(s[i]);
            len++;
        }
    }
    //cout<<st.size()<<endl;
    string ans = "";
    for (i = 0; i < st.size(); i++)
    {
        ans = st.top() + ans;
        //cout<<ans<<"P"<<endl;
        st.pop();
        i = -1;
    }
    cout << ans << endl;
    return 0;
}
