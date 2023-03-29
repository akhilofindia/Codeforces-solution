#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
    while(tc--){
        long long n;
        cin >> n;
        long long arr[n];
        long long count=0;
        long long k,ans;
        for(int i = 0; i<n; i++)
        {
            cin >> arr[i];
            count+= arr[i];
        }
        k=count%n;
        ans=k*(n-k);
        cout<<ans<<endl;
    }

	return 0;
}