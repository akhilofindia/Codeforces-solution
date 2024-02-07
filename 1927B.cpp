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
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<char>v(n);
		for (int i = 'a'; i <= 'z'; i++)
		{
			int f=0;
			for (int j = 0; j < n; j++)
			{
				if (arr[j]==f)
				{
					v[j]=i;
					arr[j]=-1;
					f++;
				}
			}
		}
		for (int i = 0; i < v.size(); i++)
		{
			cout<<v[i];
		}
		cout<<endl;
	}

	return 0;
}