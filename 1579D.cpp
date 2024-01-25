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
		vector<int>arr(n);
		priority_queue<pair<int,int>>pq;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			if (arr[i]!=0)
			{
				pq.push({arr[i],i+1});
			}
		}
		vector<pair<int,int>>vi;
		while(pq.size()>1){
			auto a=pq.top();
			pq.pop();
			auto b=pq.top();
			pq.pop();
			vi.push_back({a.second,b.second});
			if (a.first>1)
			{
				pq.push({a.first-1,a.second});
			}
			if (b.first>1)
			{
				pq.push({b.first-1,b.second});
			}
		}
		cout<<vi.size()<<endl;
		for (auto i: vi)
		{
			cout<<i.first<<" "<<i.second<<endl;
		}
	}

	return 0;
}