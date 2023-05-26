#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin>>n;
    int ans=0;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
        ans=max(ans,mp[arr[i]]);
    }
    cout<<ans<<endl;

	return 0;
}