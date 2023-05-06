#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n;
        cin>>n;
		vector <int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		int ans=0,b=0;n
		for(int i=0;i<=n;i++){
	    	int count=0,count2=0;
            for (int j = 0; j < n; j++)
            {
            	if (a[j]>i)
            	{
            		count++;
            	}else
            	    count2++;
            }
			if(count==i){
           		cout<<i<<endl;
           		b=1;
           		break;
			}
		}
		if (b==0)
		{
			cout<<-1<<endl;
		}
	}

	return 0;
}