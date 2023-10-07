#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) 
    {
      int n,a,b,c,d;
      cin>>n>>a>>b>>c>>d;
      int ans1=n*(a-b);
      int ans2=n*(a+b);
      if(ans1>(c+d) || ans2<(c-d)){
         cout<<"NO"<<endl;
      }
       else cout<<"YES"<<endl;
    }
    return 0;
}
