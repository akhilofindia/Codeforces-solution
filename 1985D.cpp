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
	while(tc--){
		ll n,m;
		cin>>n>>m;
		vector<string>grid(n);
		for (ll i = 0; i < n; i++)
		{
			cin>>grid[i];
		}
		ll min_row=n-1;
		ll mx_row=0;
		ll min_col=m-1;
		ll mx=0;
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < m; j++)
			{
				if (grid[i][j]=='#')
				{
					min_row=min(min_row,i);
					mx_row=max(mx_row,i);
					min_col=min(min_col,j);
					mx=max(mx,j);
				}
			}
		}
		ll ok=(min_row+mx_row)/2;
		ll why=(mx+min_col)/2;
		cout<<ok+1<<" "<<why+1<<endl;
	}

	return 0;
}