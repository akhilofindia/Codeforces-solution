#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T>void displayVec(vector<T> a){for(int i=0;i<a.size();i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayArr(T a[], int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayAdj(vector<T> adj[], int n){for(int i=0;i<=n;i++){cout<<i<<"->";displayVec(adj[i]);}}
template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}
template<typename T>void displaySet(set<T>st){for(auto it:st){cout<<it<<" ";}cout<<endl;}
template<typename T>void displayQueue(queue<T> q){while(!q.empty()){cout<<q.front()<<" ";q.pop();}cout<<endl;}
template<typename T>void displayPQ(priority_queue<T> pq){while(!pq.empty()){cout<<pq.top()<<" ";pq.pop();}cout<<endl;}

int main(){
	int tc;cin>>tc;
	vector<vector<int>> ans(64, vector<int>(200001, 0));
	for (int i = 0; i <= 200000; i++)
	{
		for (int j = 0; j < 64; j++)
		{
			if (i&(1ll<<j))
			{
				ans[j][i]=ans[j][i-1]+1;
			}else{
				ans[j][i]=ans[j][i-1];
			}
		}
	}
	while(tc--){
		ll l,r; cin>>l>>r;
		int mx=0;
		for (ll i = 0; i <= 63; i++)
		{
			mx=max(mx,ans[i][r]-ans[i][l-1]);
		}
		ll cnt=(r-l+1)-mx;
		cout<<cnt<<endl;
	}

	return 0;
}