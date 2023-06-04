#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n; cin>>n;
		vector <long long> arr(n);
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		if (arr[0]<0)
		{
			cout<<arr[0]<<endl;
		}else{
			cout<<*max_element(arr.begin(),arr.end())<<endl;
		}
	}

	return 0;
}