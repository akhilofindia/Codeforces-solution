#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc; cin>>tc;
	while(tc--){
		int arr[4];
		for (int i = 0; i < 4; i++)
		{
			cin>>arr[i];
		}
		if (arr[0]<arr[1] && arr[2]<arr[3] && arr[0]<arr[2] && arr[1]<arr[3] ||
			arr[2]<arr[0] && arr[3]<arr[1] && arr[2]<arr[3] && arr[0]<arr[1] ||
			arr[3]<arr[2] && arr[1]<arr[0] && arr[3]<arr[1] && arr[2]<arr[0] ||
			arr[1]<arr[3] && arr[0]<arr[2] && arr[1]<arr[0] && arr[3]<arr[2])
		{
			cy;
		}else{
			cn;
		}
	}

	return 0;
}