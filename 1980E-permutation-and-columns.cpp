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
		ll n,m; cin>>n>>m;
		ll a[n][m],b[n][m];
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < m; j++)
			{
				cin>>a[i][j];
			}
		}
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < m; j++)
			{
				cin>>b[i][j];
			}
		}
		vector<vector<ll>>x1,y1,x2,y2;
		//for rows
		for (ll i = 0; i < n; i++)
		{
			vector<ll>ok,hi;
			for (ll j = 0; j < m; j++)
			{
				ok.push_back(a[i][j]);
				hi.push_back(b[i][j]);
			}
			sort(ok.begin(),ok.end());
			x1.push_back(ok);
			sort(hi.begin(),hi.end());
			y1.push_back(hi);
		}
        //for cols
		for (ll i = 0; i < m; i++)
		{
			vector<ll>ok,hi;
			for (ll j = 0; j < n; j++)
			{
				ok.push_back(a[j][i]);
				hi.push_back(b[j][i]);
			}
			sort(ok.begin(),ok.end());
			x2.push_back(ok);
			sort(hi.begin(),hi.end());
			y2.push_back(hi);
		}

		// for (ll i = 0; i < y1.size(); i++)
		// {
		// 	for (ll j = 0; j < y1[i].size(); j++)
		// 	{
		// 		cout<<y1[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }

		sort(x1.begin(),x1.end());
		sort(x2.begin(),x2.end());
		sort(y1.begin(),y1.end());
		sort(y2.begin(),y2.end());
		if (x1==y1 && x2==y2)
		{
			cy;
		}else cn;

	}

	return 0;
}