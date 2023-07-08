#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		double n,d,h; cin>>n>>d>>h;
		vector<double>arr;
		for (int i = 0; i < n; i++)
		{
			double x;cin>>x;
			arr.push_back(x);
		}
		double ogarea=n*0.5*d*h;
		double narea=0.0;
		for (int i = 1; i < n; i++)
		{
			double diff=arr[i]-arr[i-1];
			if (diff<h)
			{
				double newheight=h-diff;
				// cout<<"nheight "<<newheight<<endl;
				double ratio=newheight/h;
				// cout<<"nratio "<<ratio<<endl;
				double newbase=d*ratio;
				// cout<<"nbase "<<newbase<<endl;
				narea+=(0.5*newheight*newbase);
				// cout<<"narea "<<narea<<endl;
			}
		}
		cout<<fixed<<setprecision(7)<<ogarea-narea<<endl;
	}

	return 0;
}