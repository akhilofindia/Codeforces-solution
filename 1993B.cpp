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
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int mxodd = 0; 
        int mxeven = 0;
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] % 2 == 1 && arr[i] > mxodd)
            {
                mxodd = arr[i];
            }
            if (arr[i] % 2 == 0 && arr[i] > mxeven)
            {
                mxeven = arr[i];
            }
        }
        int cnt = 0;
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] % 2 != arr[0] % 2) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << 0 << endl;
            continue;
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0 && arr[i] < mxodd) {
                cnt++;
                arr[i] = arr[i] + mxodd;
                mxodd = max(mxodd, arr[i]);
            }
        }
        bool flag1 = true;
        for (int i = 1; i < n; i++) 
        {
            if (arr[i] % 2 != arr[0] % 2) 
            {
                flag1 = false;
                break;
            }
        }
        if (flag1) {
            cout << cnt << endl;
            continue;
        }
        int ind = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 1 && arr[i] == mxodd) 
            {
                ind = i;
                break;
            }
        }
        arr[ind]=mxodd+mxeven;
        cnt++;
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] % 2 == 0) 
            {
                cnt++;
            }
        }
        cout<<cnt<< endl;
    }
    return 0;
}
