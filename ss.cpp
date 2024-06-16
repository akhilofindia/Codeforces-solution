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

void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);   
    if(k%2)
    {
        cout<<"NO"<<endl;return;
    }
    if(n==1)
    {
        if(k==0){
            cout<<"YES"<<endl;
            cout<<1<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    for(int i=0;i<n;i++)v[i]=i+1;
    if(k==2)
    {
        cout<<"YES"<<endl;
        cout<<v[1]<<" "<<v[0]<<" ";
        for(int i=2;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        v[i]=i+1;
    }
    for(int i=0;i<n/2;i++)
    {   
        if(k>=2*(n-(2*i+1)))
        {
            k-=2*(n-(2*i+1));
            swap(v[i], v[n-1-i]);
        }
    }    
    if(k)
    {
        cout<<"NO"<<endl;return ;
    }
    cout<<"YES"<<endl;
    for(auto i: v)cout<<i<<" ";
        cout<<endl;
    }
signed main(){
    int tc;cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}