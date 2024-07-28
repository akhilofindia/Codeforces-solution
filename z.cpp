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
        int n,m;
        cin>>n>>m;  
        vector<int>v1(n),v2(n);
        for (int i = 0; i < n; i++) 
        {
            cin>>v1[i];
        }
        for (int i = 0; i < n; i++) 
        {
            cin>>v2[i];
        }
        map<int,int>mp;
        for (int i = 0; i < n; i++) 
        {
            mp[v1[i]]=v2[i];
        }   
        int mx = 0;
        for(auto it:mp) {
            int nex=0;
            if (mp.count(it.first+1)) 
            {
                nex=mp[it.first+1];
            }
            int take=min(it.second,m/it.first);
            int left=m-take*it.first;
            int next=0;
            if (mp.count(it.first+1)) {
                next=min(nex,left/(it.first + 1));
                left-=next*(it.first+1);
            }
            int ok=min(min(take,left),nex-next);
            mx=max(mx,take*it.first+next*(it.first+1));
            next+=ok;
            take-=ok;
            mx=max(mx,next*(it.first+1)+take*it.first);
        }
        cout<<mx<<endl;
    }
    return 0;
}


