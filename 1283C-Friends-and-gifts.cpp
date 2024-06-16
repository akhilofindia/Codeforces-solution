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
    int n; cin >> n;
    vector<int> v(n+1);
    map<int,int>mp;
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<int> temp;
    for (int i = n; i > 0; i--){
        if (!mp[i])
        {
            temp.push_back(i);
        }
    }
    int j=0;
    vector<pair<int,int>> ok;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            ok.push_back({i,temp[j]});
            j++;
        }
    }
    for (int i = 0; i < ok.size()-1; i++)
    {
        if (ok[i].first==ok[i].second || ok[i+1].first==ok[i+1].second)
        {
            swap(ok[i].second,ok[i+1].second);
        }
    }
    for (int i = 0; i < ok.size(); i++)
    {
        v[ok[i].first]=ok[i].second;
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<v[i]<< " ";
    }
    ce;
    return 0;
}