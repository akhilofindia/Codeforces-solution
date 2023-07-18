#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m; cin>>n>>m;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n, greater<int>());
		int pref[n];
		pref[0]=arr[0];
		for (int i = 1; i < n; i++)
		{
			pref[i]=pref[i-1]+arr[i];
		}
		for(int i=0;i<m;i++)
       	{
        	int x; cin>>x;
	        auto y=lower_bound(pref,pref+n,x);
	        if(y!=pref+n)
    	    {
        	    cout<<(y-pref)+1<<endl;
          	}else
 			    cout<<-1<<endl;
    	}
	}

	return 0;
}