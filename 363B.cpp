#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
    cin >> n >> k;
    int a[n],b[n];
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }

    int min = INT_MAX;
    int ans = 0;
    for(int i = k; i <= n; i++)
    {
        int sum = b[i]-b[i-k];
        if(min>sum){
            ans = i-k+1;
            min = sum;
        }
    }
    cout<<ans<<endl;

	return 0;
}