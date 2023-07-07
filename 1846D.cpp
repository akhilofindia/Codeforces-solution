#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		double n,d,h;cin>>n>>d>>h;
		vector <double>arr;
		for (int i = 0; i < n; i++)
		{
			double x; cin>>x;
			arr.push_back(x);
		}
		sort(arr.begin(),arr.end());
		double mx=0; 
		double newbase=0;
		double newarea;
		for (int i = 1; i < n; i++)
		{
			double diff=arr[i]-arr[i-1];
			if (diff<h )
			{
				newbase=((h-diff)/h)*d;
                // cout<<newbase<<endl;
				double newheight=diff;

				newarea+=(1/2*newheight*newbase);
			}
		}
		double area=n*(1/2*d*h)-newarea;
		cout<<setprecision(8)<<fixed<<area<<endl;
	}

	return 0;
}