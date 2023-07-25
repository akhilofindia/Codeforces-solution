#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m,k,h;
		cin>>n>>m>>k>>h;
		int heights[n];
		for (int i = 0; i < n; i++)
		{
			cin>>heights[i];
		}
		vector<int>v;
		int cnt=0;
		for (int i = 0; i < n; i++)
		{
			v.push_back(abs(heights[i]-h));
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < m; j++)
			{
				if (j*k!=v[i])
				{}else{
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;

	}

	return 0;
}