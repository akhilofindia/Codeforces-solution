#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int boys[n];
	for (int i = 0; i < n; i++)
	{
		cin>>boys[i];
	}
	int m;cin>>m;
	int girls[m];
	for (int i = 0; i < m; i++)
	{
		cin>>girls[i];
	}
	sort(boys,boys+n);
	sort(girls,girls+m);
	int cnt=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (abs(boys[i]-girls[j])<=1)
			{
				girls[j]=10000;
				cnt++;
				break;
			}
		}
	}
	cout<<cnt<<endl;



	return 0;
}