#include <bits/stdc++.h>
using namespace std;

int main(){
	double n,x0,y0;
	cin>>n>>x0>>y0;
	set<double>st;
	double cnt=0;
	for (double i = 0; i < n; i++)
	{
		double x,y;
		cin>>x>>y;
		if (x==x0)
		{
			cnt=1;
			continue;
		}
		double slope=(y-y0)/(x-x0);
		st.insert(slope);
	}
	cout<<st.size()+cnt<<endl;

	return 0;
}