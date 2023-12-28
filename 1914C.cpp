#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k; cin>>n>>k;
		long long a[n],b[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (long long i = 0; i < n; i++)
		{
			cin>>b[i];
		}
		long long cnt=0;
		long long ans=0;
		long long total=0;
		long long maxxx=INT_MIN;
		for (long long i = 0; i < n; i++)
		{
			// cnt++;
			if(cnt!=k){
			    ans+=a[i];
			    if (b[i]>=maxxx)
			    {
			    	maxxx=b[i];
			    }
			    total=max(total,ans+maxxx*(k-i-1));
		    }else{
		    	break;
		    }
			cnt++;
		}
		cout<<total<<endl;
	}

	return 0;
}