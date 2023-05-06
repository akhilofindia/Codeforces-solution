#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		string a; cin>>a;
		string b= "codeforces";
		int count=0;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i]!=b[i])
			{
				count++;
			}
		}
		cout<<count<<endl;
	}

	return 0;
}