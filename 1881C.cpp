#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<string>v;
		string s;
		for (int i = 0; i < n; i++)
		{
			cin>>s;
			v.push_back(s);
		}
		int cnt=0;
		for (int i = 0; i < n/2; i++)
		{
			for (int j = 0; j < n/2; j++)
			{
				vector<int>vi;
				vi.push_back(v[i][j]-'a');
				vi.push_back(v[j][n-1-i]-'a');
				vi.push_back(v[n-1-i][n-1-j]-'a');
				vi.push_back(v[n-1-j][i]-'a');
				sort(vi.begin(),vi.end());
				for (int k = 0; k < 3; k++)
				{
					cnt+=vi[3]-vi[k];
				}
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}