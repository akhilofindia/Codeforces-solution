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
		ll a,b,c,k;cin>>a>>b>>c>>k;
		ll mx=0;
		for (ll i = 1; i <= a; ++i)
		{
			for (ll j = 1; j <= b; j++)
			{
				if (k%i==0 && (k/i)%j==0)
				{
					if ((k/i)%j==0)
					{
						ll x=i;
					    ll y=j;
					    ll h=k/(i*j);
					    ll cnt1=a-x+1;
					    ll cnt2=b-y+1;
					    ll cnt3=c-h+1;
					    mx=max(mx,cnt1*cnt2*cnt3);
					}
				}
			}
		}
		cout<<mx<<endl;
	}

	return 0;
}