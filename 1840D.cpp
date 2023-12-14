#include <bits/stdc++.h>
using namespace std;

bool f(int mid,vector<int>&v){
	int cnt=1;
	int x=v[0]+mid;
	for(int i = 0; i < v.size();i++){
		if (v[i]-x>mid)
		{
			cnt++;
			x=v[i]+mid;
		}
	}
	return cnt<=3;
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		int l=0,h=arr[n-1];
		while(l<h){
			int mid=l+(h-l)/2;
			if (f(mid,arr))
			{
				h=mid;
			}else{
				l=mid+1;
			}
		}
		cout<<h<<endl;
	}

	return 0;
}