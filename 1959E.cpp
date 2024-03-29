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
		int n;cin>>n;
		string s; cin>>s;
		int low=0;
		int high=n-1;
		string ans;
		int flag=0;
		while(low<=high){
			int mid=(low+high)/2;
			string ss=s.substr(low,mid-low);
			string ss2=s.substr(mid,high-mid);
			if (ss==ss2)
			{
				ans=ss;
				flag=1;
				break;
			}else{
				low=mid+1;
			}
		}
		if (flag)
		{
			cout<<ans.size()<<endl;
		}else{
			cout<<n<<endl;
		}
	}

	return 0;
}