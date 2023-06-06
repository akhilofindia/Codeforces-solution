#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,k; cin>>n>>k;
		vector< pair <int,int> > a(n);
		vector <int> b(n),c(n);
		for (int i = 0; i < n; i++)
		{
			cin>>a[i].first;
			a[i].second=i;
		}
		for (int i = 0; i < n; i++)
		{
			cin>>b[i];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());	
		for (int i=0; i<n; i++)
		{
        	c[a[i].second]=b[i];
		}	
		for (int i = 0; i < n; i++)
		{
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}