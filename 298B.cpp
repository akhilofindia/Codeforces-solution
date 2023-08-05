#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,sx,sy,ex,ey;
	cin>>t>>sx>>sy>>ex>>ey;
	vector<char>v(t);
	int count=0,flag=0;
	for (int i = 0; i < t; i++)
	{
		cin>>v[i];
	}
	int north=0,south=0,west=0,east=0;
	if (sx>ex)
	{
		west+=(sx-ex);
	}else if (sx<ex)
	{
		east+=(ex-sx);
	}
	if (sy>ey)
	{
		south+=(sy-ey);
	}else if (sy<ey)
	{
		north+=(ey-sy);
	}
	for (int i = 0; i < t; i++)
	{
		if (v[i]=='W')
		{
			west--;
		}else if (v[i]=='N')
		{
			north--;
		}else if (v[i]=='S')
		{
			south--;
		}else{
			east--;
		}
		if (east<=0 && south<=0 && north<=0 && west<=0)
		{
			flag=1;
			count=i+1;
			// cout<<i+1<<endl;
			break;
		}
	}
	if (flag)
	{
		cout<<count<<endl;
	}else{
		cout<<-1<<endl;
	}

	return 0;
}