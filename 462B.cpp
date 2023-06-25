#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    string s; cin>>s;
    map<char,long long> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    vector<long long> arr;
    for(int i=0;i<mp.size();i++)
    {
        arr.push_back(mp[i]);
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        if(k<=0){
            break;
        }
        if(arr[i]<k){
            ans+=arr[i]*arr[i];
        }
        if(k<=arr[i]){
            ans+=k*k;
        }
        k-=arr[i];
    }
    cout<<ans<<endl;

    return 0;
}