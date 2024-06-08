// ॐ श्री सरस्वत्यै नमः
// Not an engineer anymore.

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pi = pair<int,int>;
using pl = pair<ll,ll>;
using pd = pair<ld,ld>;
 
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>; 
using vs = vector<string>;
using vpi = vector<pi>;
using vpl = vector<pl>; 
using vpd = vector<pd>;

#define yes cout << "YES" <<endl;
#define no cout << "NO" <<endl;
#define int long long

// vectors
#define sz(x) int((x).size())
#define all(x) begin(x), end(x)

// bitwise
#define numberOfBits(x) __builtin_popcountll(x)

template<typename T>void displayVec(vector<T> a){for(int i=0;i<a.size();i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayArr(T a[], int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayAdj(vector<T> adj[], int n){for(int i=0;i<=n;i++){cout<<i<<"->";displayVec(adj[i]);}}
template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}
template<typename T>void displaySet(set<T>st){for(auto it:st){cout<<it<<" ";}cout<<endl;}
template<typename T>void displayQueue(queue<T> q){while(!q.empty()){cout<<q.front()<<" ";q.pop();}cout<<endl;}
template<typename T>void displayPQ(priority_queue<T> pq){while(!pq.empty()){cout<<pq.top()<<" ";pq.pop();}cout<<endl;}

// -----------------------------------------------------------------------------
// functions which are frequently used by me

// function to lowercase all or uppercase all
// 0 for lower, 1 for upper
void changeCase(int which, string &a){
    if (which)
    {
        for(int i=0; i<a.length(); i++){
            if (a[i]>='a' && a[i]<='z')
            {
                a[i]=a[i]-'a'+'A';
            }
        }
    }else{
        for(int i=0; i<a.length(); i++){
            if (a[i]>='A' && a[i]<='Z')
            {
                a[i]=a[i]-'A'+'a';
            }
        }
    }
}

// -----------------------------------------------------------------------------

signed main(){
    // ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int tc; cin>>tc;
    while(tc--){
        int n,k,z; cin>>n>>k>>z;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int prefix[n];
        prefix[0]=arr[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i]=prefix[i-1]+arr[i];
        }
        vector<int> greater(n-1,0);
        for (int i = 1; i < n-1; i++)
        {
            greater[0]=arr[0]+arr[1];
            greater[i]=max(greater[i-1],arr[i]+arr[i+1]);
        }
        // displayArr(prefix,n);
        // displayVec(greater);
        // cout<<endl;
        int answer = 0;
        int left = k;
        for (int i = 0; i <= z && left>=i; i++)
        {
            answer=max(answer,prefix[k-2*i]+i*greater[k-2*i]);
            left--;
        }
        cout<<answer<<endl;

    }       
    return 0;
}