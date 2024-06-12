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

void dfs(int ind,vector<vector<int>>&adj,vector<vector<int>>&ans,vector<int>&vis,vector<int>&cnt){
	vis[ind]=1;
	cnt.push_back(ind);
	for (auto i: adj[ind])
	{
		if (!vis[i])
		{
			dfs(i,adj,ans,vis,cnt);
			cnt.push_back(-1);
		}
	}
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<vector<int>>adj(n+1);
		int root;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]!=i+1)
			{
				adj[arr[i]].push_back(i+1);
				adj[i+1].push_back(arr[i]);
			}else{
				root=i+1;
			}
		}
		vector<vector<int>>ans;
		vector<int>vis(n+1,0);
		vector<int>cnt;
		dfs(root,adj,ans,vis,cnt);
		vector<int>v;
		int flag=0;
		for (int i = 0; i < cnt.size(); i++)
		{
			if (cnt[i]!=-1)
			{
				flag=1;
				v.push_back(cnt[i]);
			}
			if (cnt[i]==-1 && flag)
			{
				ans.push_back(v);
				v.clear();
				flag=0;
			}
			if (i==cnt.size()-1 && flag)
			{
				ans.push_back(v);
			}
		}
		cout<<ans.size()<<endl;
		for (int i = 0; i < ans.size(); i++)
		{
			cout<<ans[i].size()<<endl;
			for (int j = 0; j < ans[i].size(); j++)
			{
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
		// displayVec(cnt);
		cout<<endl;
	}

	return 0;
}