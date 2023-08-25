#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m;cin>>n>>m;
		vector<string>v(n),p;
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		for (int i = 0; i < m; i++)
		{
			string z="";
			for (int j = 0; j < n; j++)
			{
				z+=v[j][i];
			}
			p.push_back(z);
		}
		string ans="vika";
		int j=0;
		for (int i = 0; i < m; i++)
		{
			if (p[i].find(ans[j]) != string::npos){
	            j++;
	        }
			if (j==4)
			{
				break;
			}
		}
		if (j==4)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}