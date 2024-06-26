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
        ll n;cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll sum=0;
        ll cnt=0;
        ll mx=INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            mx=max(mx,arr[i]);
            sum+=arr[i];
            if (sum/2==mx && sum%2==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}