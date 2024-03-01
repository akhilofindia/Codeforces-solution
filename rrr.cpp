#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
    int tc;cin>>tc;
    while(tc--){
        int n; cin>>n;
        string a,b; cin>>a>>b;
        string ans=a+b;
        int cnt=1;
        for (int i = 0; i < n; i++)
        {
            string s=a.substr(0,i+1)+b.substr(i,n);
            // cout<<s<<endl;
            if (s<ans)
            {
                ans=s;
                cnt=1;
            }else if (s==ans)
            {
                cnt++;
            }
        }
        cout<<ans<<endl<<cnt<<endl;
    }

    return 0;
}