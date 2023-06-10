#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		string arr; cin>>arr;
		vector <int> v;
		for (int i = 0; i < n/2; i++)
		{
			if ((arr[i]=='0' && arr[n-i-1]=='1') || (arr[i]=='1' && arr[n-i-1]=='0') )
			{
				v.push_back(arr[i]);
				v.push_back(arr[n-i-1]);
			}else{
				break;
			}
		}
		cout<<n-v.size()<<endl;
	}

	return 0;
}	