#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define all(x) (x).begin(),(x).end()
#define rall(x) x.rbegin(),x.rend()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define rep(i,a,b) for (ll i = a; i < b; i++)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
#define rev_sort(x) sort(all(x),greater<ll>())

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    vector<ll> b=a;
    vector<pair<ll,ll>> v;
    rep(i,0,n){
        v.pb({a[i],i});
    }
    sort(v.begin(),v.end());
    sort(b.begin(),b.end());
    vector<ll> pre(n,0);
    pre[0]=b[0];
    for(int i=1;i < n;i++){
        pre[i]=pre[i-1]+b[i];
    }
    vector<ll> ans(n);
    ans[v[n-1].second]=n-1;
    rev(i,n-2,0){
        if(pre[i]>=v[i+1].first){
            ans[v[i].second]=ans[v[i+1].second];
        }
        else{
            ans[v[i].second]=i;
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }   
    return 0;
}