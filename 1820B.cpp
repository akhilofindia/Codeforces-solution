#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		string s; cin >> s;
        long long n = s.size();
        long long a=0,b=0;
        long long count=0;
        long long ans = 1;
        for (long long i = 0; i < n; i++)
        {
        	if (s[i]=='1')
        	{
        		count++;
        	}else{
        		if (ans)
        		{
        			ans=0;
        			b=count;
        		}
        		a=max(a,count);
        		count=0;
        	}
        }
        a=max(a,b+count);
        if (a==n)
        {
        	cout<<n*n<<endl;
        }else{
        	long long l=(a+1)/2;
        	long long b=(a+2)/2;
        	cout<<l*b<<endl;
        }
	}

	return 0;
}