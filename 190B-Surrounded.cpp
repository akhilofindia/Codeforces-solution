#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	double x1,x2,z1;
	double y1,y2,z2;
	cin>>x1>>x2>>z1;
	cin>>y1>>y2>>z2;
	double c1c2=(x1-y1)*(x1-y1)+(x2-y2)*(x2-y2);
	double ok=(double)sqrt(c1c2);
	if (ok<=z1-z2)
	{
		cout<< fixed << setprecision(15) <<(z1-(ok+z2))/2<<endl;
	}else if (ok<=z2-z1)
	{
		cout<< fixed << setprecision(15) <<(z2-(z1+ok))/2<<endl;
	}else if (ok<=z1+z2)
	{
		cout<<0<<endl;
	}else{
		// cout<<"hi";
		// cout<<ok<<endl;
		double ans=(ok-(z1+z2))/2;
		cout<< fixed << setprecision(15) <<ans<<endl;
	}

	return 0;
}