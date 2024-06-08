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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll findlcm(int arr[], int n)
{
    ll ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		ll n; cin>>n;
		int arr[n];
		int cnt=0;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<ll>ans(n);
		ll okk=findlcm(arr,n);
		ll sum=INT_MAX;
		for (ll i = 0; i < n; i++)
		{
			ans[i]=okk/arr[i];
			cnt+=ans[i];
			sum=min(sum,ans[i]*arr[i]);
		}
		if (sum<=cnt)
		{
			cout<<-1<<endl;
			// for (int i = 0; i < n; i++)
			// {
			// 	cout<<ans[i]<<" ";
			// }
			// cout<<endl;
		}else{
			for (int i = 0; i < n; i++)
			{
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}

	}

	return 0;
}