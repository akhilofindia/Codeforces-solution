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
		int n;
		char c;
		cin>>n>>c;
		string s; cin>>s;
		bool flag=true;
		for (int i = 0; i < n; i++)
		{
			if (s[i]!=c)
			{
				flag=false;
				break;
			}
		}
		if (flag)
		{
			cout<<0<<endl;
		}else{
			int z=0;
			int ans;
			for (int i = n/2; i < n; i++)
		    {
			    if (s[i]==c)
			    {
			        ans=i+1;
			    	z=1;
			    	break;
			    }
		    }
		    if (z==1)
		    {
		    	cout<<1<<endl;
		    	cout<<ans<<endl;
		    }else{
		    	cout<<2<<endl;
		    	cout<<n-1<<" "<<n<<endl;
		    }
	    }
	}

	return 0;
}