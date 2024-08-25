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
    int tc;
    cin >> tc;
    while(tc--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        map<int,int>mp;
        if (a>c) {
            swap(a, c);
            swap(b, d);
        }
        if (c>b||a>d) {
            cout<<1<<endl;
        }else{
            int cnt=0;
            for (int i = a; i <= b; i++) 
            {
                mp[i]++;
            } 
            int x=-1,y=-1;
            for (int i = c; i <= d; i++) 
            {
                mp[i]++;
            }
            for (int i = 1; i <= 100; i++) {
                if (mp[i]==2) 
                {
                    y=i;
                    cnt++;
                    if (x==-1)
                    {
                        x=i;
                    }
                }
            }
            if (max({a,b,c,d}) > y){
                cnt++;
            }
            if (min({a,b,c,d}) < x) {
                cnt++;
            }          
            cout <<cnt-1<<endl;
        }
    }

    return 0;
}
