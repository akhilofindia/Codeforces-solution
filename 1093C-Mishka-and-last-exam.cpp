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
	ll n;cin>>n;
	ll arr[n/2];
	for (ll i = 0; i < n/2; i++)
	{
		cin>>arr[i];
	}
	vector<ll>final1,final2;
	ll x=0,y=LLONG_MAX;
	for (ll i = 0; i < n/2; i++)
	{
		ll a=x,b=arr[i]-a;
		if (b>y)
		{
			b=y;
			a=arr[i]-b;
		}
		final1.push_back(a);
		final2.push_back(b);
		x=a,y=b;
	}
	for (ll i = 0; i < final1.size(); i++)
	{
		cout<<final1[i]<<" ";
	}
	reverse(final2.begin(),final2.end());
	for (ll i = 0; i < final2.size(); i++)
	{
		cout<<final2[i]<<" ";
	}
	cout<<endl;
	return 0;
}