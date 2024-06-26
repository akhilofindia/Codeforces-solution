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

int fact(int n, int MOD){
    if(n==0) return 1;
    int res = 1;
    for(int i=2; i<=n; i++){
        res=res*i;
        res%=MOD;
    }
    return res;
}

int combin(int n, int r, int MOD){
    return (fact(n,MOD)/(fact(r,MOD)*fact(n-r,MOD)))%MOD;
}

int f(int n){
    int MOD = 1e4 + 7;
    int answer = 0;
    for(int i=2;i<=n-1; i++){
        answer+=combin(n-1,i,MOD)*pow(9,n-i);
        answer%=MOD;
    }
    return answer;
}

signed main(){
    int n; cin>>n;
    int answer = f(n);
    cout<<answer<<endl;

    return 0;
}