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

signed main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) 
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        if (arr[n-1]-arr[0]<m) 
        {
            cout<<arr[n-1]<<endl;
            continue;
        }
        vector<int>ans;
        ans.push_back(arr[n-1]);
        for (int i = 0; i < n-1; i++) {
            int ok = arr[n-1]-arr[i];
            if (ok>=m) {
                int f=ok/m;
                if (ok%m!= 0)
                {
                    f++;
                }
                f+=(f%2);
                int wow = arr[i]+f*m;
                if (wow>arr[n-1] && (wow-arr[n-1]) > m) 
                {
                    ans.push_back(wow-2*m);
                }else{
                    ans.push_back(wow);
                }
            }else
            {
                ans.push_back(arr[i]);
            }
        }
        sort(ans.begin(),ans.end());
        if (m>ans[n-1]-ans[0])
        {
            cout<<ans[n-1]<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
