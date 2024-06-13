#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";
#define ce cout<<endl;
#define int long long

template<typename T>void displayVec(vector<T> a){for(int i=0;i<a.size();i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayArr(T a[], int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayAdj(vector<T> adj[], int n){for(int i=0;i<=n;i++){cout<<i<<"->";displayVec(adj[i]);}}
template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}
template<typename T>void displaySet(set<T>st){for(auto it:st){cout<<it<<" ";}cout<<endl;}
template<typename T>void displayQueue(queue<T> q){while(!q.empty()){cout<<q.front()<<" ";q.pop();}cout<<endl;}
template<typename T>void displayPQ(priority_queue<T> pq){while(!pq.empty()){cout<<pq.top()<<" ";pq.pop();}cout<<endl;}

signed main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<int>arr(n),b(n);
		map<int,int>mp;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int flag=0;
		int ind=0;
		for (int i = 1; i < n; i++)
		{
			if (arr[i]<arr[ind])
			{
				ind=i;
			}
		}
		for (int i = ind+1; i < n; ++i)
		{
			if (arr[i]<arr[i-1])
			{
				flag=1;
			}
		}
		if (flag)
		{
			cout<<-1<<endl;
		}else cout<<ind<<endl;
	}

	return 0;
}