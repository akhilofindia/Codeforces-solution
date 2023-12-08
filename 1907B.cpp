#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string a; cin>>a;
		int B[a.size()]={};
		vector<int>A;
		vector<int>C;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i]=='b')
			{
				if (C.size()>0)
				{
					B[C[C.size()-1]]=1;
					C.pop_back();
				}
				B[i]=1;
			}else if (a[i]=='B')
			{
				if (A.size()>0)
				{
					B[A[A.size()-1]]=1;
					A.pop_back();
				}
				B[i]=1;
			}else if (a[i]>='A' && a[i]<='Z')
			{
				A.push_back(i);
			}else{
				C.push_back(i);
			}
		}
		for (int i = 0; i < a.size(); i++)
		{
			if (B[i]==0)
			{
				cout<<a[i];
			}
		}
		cout<<endl;
	}

	return 0;
}