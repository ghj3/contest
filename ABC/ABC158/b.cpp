#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n,a,b;
  cin>> n >>a>>b;
  long long int ans = n/(a+b)*a;
  long long int rem = n%(a+b);
  ans+= min(rem,a);
    
    cout << ans << endl;
  
}
