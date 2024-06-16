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
        int n,k;cin>>n>>k;
        vector<int>v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        reverse(v.begin(),v.end());
        int sum=0;
        for (int i = 1; i <= n/2; i++)
        {
            sum+=abs(v[i-1]-i);
        }
        if (k>sum*2 || k%2!=0)
        {
            cout<<"NO"<<endl;
        }else{
            vector<int>p;
            for (int i = 1; i <= n; i++)
            {
                p.push_back(i);
            }
            int j=n-1;
            for (int i = 0; i < n; i++)
            {
                while(j && i<j && abs(p[i]-(j+1))+abs(p[j]-(i+1))>k){
                    j--;
                }
                k-=abs(p[i]-(j+1))+abs(p[j]-(i+1));
                swap(p[i],p[j]);
                j--;
                if (k<=0 || i>=j)
                {
                    break;
                }
            }
            cy;
            displayVec(p);
        }
    }

    return 0;
}