#include <bits/stdc++.h>
using namespace std;

int xorOfArray(int arr[], int n)
{
    int xor_arr = 0;
    for (int i = 0; i < n; i++) {
        xor_arr ^= arr[i];
    }
    return xor_arr;
} 

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin>>b[i];
		}
		int ans=0;
		for (int i = 0; i < m; i++)
		{
			ans|=b[i];
		}
		int cnt=0,cnt2=0;
		cnt2=xorOfArray(a,n);
		for (int i = 0; i < n; i++)
		{
			a[i]|=ans;
		}
		cnt=xorOfArray(a,n);
		int x=min(cnt,cnt2);
		int y=max(cnt,cnt2);
		cout<<x<<" "<<y<<endl;
	}

	return 0;
}