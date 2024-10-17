#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";
#define ce cout<<endl;
#define int long long

 
#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);
 


template<typename T>void displayVec(vector<T> a){for(int i=0;i<a.size();i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayArr(T a[], int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayAdj(vector<T> adj[], int n){for(int i=0;i<=n;i++){cout<<i<<"->";displayVec(adj[i]);}}
template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}
template<typename T>void displaySet(set<T>st){for(auto it:st){cout<<it<<" ";}cout<<endl;}
template<typename T>void displayQueue(queue<T> q){while(!q.empty()){cout<<q.front()<<" ";q.pop();}cout<<endl;}
template<typename T>void displayPQ(priority_queue<T> pq){while(!pq.empty()){cout<<pq.top()<<" ";pq.pop();}cout<<endl;}

signed main(){
	fastIO;
    int n,m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
    {
        cin>>arr[i];
    }
    vector<vector<int>> dp(m+1,vector<int>(m+1,0));
    dp[0][0]=0;
    vector<int> v1,v2;
    int total = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > 0) {
            v1.push_back(arr[i]);
        } else if (arr[i] < 0) {
            v2.push_back(-arr[i]);
        } else {
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            total++;
			for (int j = 0; j <= total; j++) { 
                if (j != 0) {
                    int c1 = j - 1, c2 = total - j;
                    int val = (upper_bound(v1.begin(),v1.end(), c1) - v1.begin()) +
                              (upper_bound(v2.begin(),v2.end(), c2) - v2.begin()); 
                    dp[total][j] = max(dp[total][j], dp[total - 1][j - 1] + val);
                }
                if (j < total) {
                    int c1 = j, c2 = total - j - 1;
                    int val = (upper_bound(v1.begin(),v1.end(), c1) - v1.begin()) +
                              (upper_bound(v2.begin(),v2.end(), c2) - v2.begin());
                    dp[total][j] = max(dp[total][j], dp[total - 1][j] + val);
                }
            }
            v1.clear();
            v2.clear();
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int cnt = 0;
    for (int i = 0; i <= m; i++) {
        int intel = i, strength = m-i;
        int ans = (upper_bound(v1.begin(),v1.end(),intel)-v1.begin()) +
                  (upper_bound(v2.begin(),v2.end(),strength)-v2.begin());
        cnt = max(cnt, dp[m][i] + ans);
    }

    cout << cnt << endl;

    return 0;
}
