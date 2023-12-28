#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin>>n;
	map<long long,long long>mp;
	mp[-1]=0;
	while(n--){
		long long a,b; cin>>a>>b;
		if (a==1)
		{
			long long x=(long long)pow(2,b);
			mp[x]++;
		}else{
            auto x=mp.lower_bound(b);
            long long mn=INT_MAX;
            long long flag=0;
            while(x!=mp.begin())
            {
            	int cnt=b/x->first * x->first;
            	int ans=x->first*x->second;
            	// cout<<cnt<<" "<<ans<<endl;
            	mn=min(cnt,ans);
            	b-=mn;
            	if (b==0)
            	{
            		flag=1;
            		break;
            	}
            	x--;

            }
            if (flag==0)
            {
            	cout<<"NO"<<endl;
            }else{
            	cout<<"YES"<<endl;
            }
		}
	}
 

	return 0;
}