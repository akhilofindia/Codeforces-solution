#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		string s; cin>>s;
		set <string> ans;
		for (int i = 0; i < n-1; i++)
		{
			string a=s.substr(i,2);
         	ans.insert(a);
		}
		cout<<ans.size()<<endl;
	}

	return 0;
}