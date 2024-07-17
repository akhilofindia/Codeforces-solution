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
		int n;
		cin>>n;
		int arr1[n],arr2[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr1[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin>>arr2[i];
		}
		int sum1=0,sum2=0;
		int plus=0,minus=0;
		for (int i = 0; i < n; i++)
		{
			if (arr1[i]!=arr2[i])
			{
				if (arr1[i]>=arr2[i])
				{
					sum1+=arr1[i];
				}else{
					sum2+=arr2[i];
				}
			}else{
				if (arr1[i]==1)
				{
					plus++;
				}else if (arr1[i]==-1)
				{
					minus++;
				}
			}
		}
		while(minus--){
			if (sum1>sum2)
			{
				sum1--;
			}else{
				sum2--;
			}
		}
		while(plus--){
			if (sum1<sum2)
			{
				sum1++;
			}else{
				sum2++;
			}
		}
		cout<<min(sum1,sum2)<<endl;
	}

	return 0;
}