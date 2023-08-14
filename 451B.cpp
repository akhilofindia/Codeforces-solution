#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<int>a(n),b(n);
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b.begin(),b.end());
	int left=0,right=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]!=b[i])
		{
			right=i;
		}
		if (a[n-i-1]!=b[n-1-i])
		{
			left=n-i-1;
		}
	}
	int flag=0;
	reverse(a.begin()+left,a.begin()+right+1);
	for (int i = 0; i < n; i++)
	{
		if (a[i]!=b[i])
		{
			flag=1;
		}
	}
	if (flag)
	{
		cout<<"no"<<endl;
	}else{
		cout<<"yes"<<endl;
		cout<<left+1<<" "<<right+1;
	}

	return 0;
}