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

bool f(vector<ll>&arr,vector<ll>&arr2,ll ok,ll &health){
	ll cnt=0;
	for (int i = 0; i < arr.size(); i++)
	{
		ll wow=arr[i]*((ok/arr2[i])+1);        //ok moves m kitna damage
		cnt+=wow;
		if (cnt>=health)
		{
			return true;
		}
	}
	if (cnt>=health)
	{
		return true;
	}else return false;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		ll h,n;cin>>h>>n;
		ll health=h;
		vector<ll>arr(n),arr2(n);
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (ll i = 0; i < n; i++)
		{
			cin>>arr2[i];
		}
		ll l=0;
		ll hi=1e12;
		while(hi-l>1){
			ll mid=l+(hi-l)/2;
			if (f(arr,arr2,mid,health))
			{
				hi=mid;
			}else{
				l=mid;
			}
		}
		if (!f(arr,arr2,l,health))
		{
			cout<<hi+1<<endl;
		}else{
			cout<<l+1<<endl;
		}
	}

	return 0;
}