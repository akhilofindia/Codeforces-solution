#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	int cnt=0;
	int index=0;
	for (int i = 0; i < n-1; i++)
	{
		if (v[i]>v[i+1])
		{
			cnt++;
			index=i+1;
		}
	}
	if (v[n-1]>v[0])
	{
		cnt++;
	}
	if (cnt>1)
	{
		cout<<-1<<endl;
	}else{
		if (index==0)
		{
			cout<<0<<endl;
		}else{
			cout<<n-index<<endl;
		}
	}

	return 0;
}