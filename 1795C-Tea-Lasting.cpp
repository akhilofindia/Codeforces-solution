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
        ll n;cin>>n;
        vector<ll>a(n),b(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        vector<ll>pre(n);
        pre[0]=b[0];
        for (ll i = 1; i < n; ++i)
        {
        	pre[i]=pre[i-1]+b[i];
        }
        vector<ll>v(n);
        vector<ll>code(n+1,0);
        vector<ll>left(n+1,0);
        vector<ll>cups(n+1);
        for (ll i = 0; i < n; i++)
        {
        	if (i>0)
        	{
        		a[i]+=pre[i-1];
        	}
            //finding index till which testers can drink full cup
        	auto it=lower_bound(pre.begin(),pre.end(),a[i]);
        	ll low=distance(pre.begin(),it);
        	if (pre[low]!=a[i] || low>=n)
        	{
        		low--;
        	}
            //storing what amount of tea left
        	if(low<i){
        		left[low+1]+=a[i]-(low==-1?0:pre[low]);
        	}else {
          		left[low+1]+=max(0ll,a[i]-pre[low]);
        	}
            //encoding the range from current tester to those future tester 
            //who will drink entire cup
        	code[i]++;
        	code[low+1]--;
        }
        //calculating number of cups a tester can drink
        cups[0]=code[0];
        for (ll i = 1; i < n; i++)
        {
            cups[i]=cups[i-1]+code[i];
        }
        for (ll i = 0; i < n; i++)
        {
            //number of cups he can drink and then he will drink the left tea 
            //if any left from his past
        	v[i]=cups[i]*b[i]+max(0ll,left[i]);
        	cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}