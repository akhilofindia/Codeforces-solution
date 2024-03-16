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
		vector<int>v(n);
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		int flag=0;
		for (int i=n-2; i>=0 ; i--)
		{
			if (v[i]<=v[i+1])  //sorted
			{
			}else if (v[i]<10)
			{
				flag=1;
				break;
			}else{
				int l=v[i];
				int ans=l%10;
				if ((l/10)<=ans && v[i+1]>=ans)
				{
					v[i]=l/10;
				}else{
					flag=1;
					break;
				}
			}
		}
		if (flag)
		{
			cn;
		}else cy;
	}

	return 0;
}