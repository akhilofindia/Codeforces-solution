#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int h,w,n; cin>>h>>w>>n;
	char arr[h][w];
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			arr[i][j]='.';
		}
	}

	return 0;
}