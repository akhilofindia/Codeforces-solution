#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a;
	set<int>st;
	for (int i = 1; i <= n; i++)
	{
		cin>>a;
		st.insert(a);
	}
	for (int i = 1; i <= 3100; i++)
	{
		if (!st.count(i))
		{
			cout<<i<<endl;
			break;
		}
	}

	return 0;
}