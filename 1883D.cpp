#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	multiset<int>st1,st2;
	while(n--){
		char a;
		int b,c;
		cin>>a>>b>>c;
		if (a=='+')
		{
			st1.insert(b);
			st2.insert(c);
		}else{
			st1.erase(st1.find(b));
			st2.erase(st2.find(c));
		}
		if (st1.size())
		{
			int mn=*st2.begin();
			int mx=*st1.rbegin();
			if (mx>mn)
			{
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}