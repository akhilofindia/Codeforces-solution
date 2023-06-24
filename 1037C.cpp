#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	string a,b; cin>>a>>b;
	int ans=0;
	for (int i = 0; i < n; i++)
	{
		if(a[i]!=b[i])
        {
            if (a[i+1]!=b[i+1] && a[i]!=a[i+1])
            {
            	ans++;
            	i++;
            }else{
            	ans++;
            }
        }
	}
	cout<<ans<<endl;

	return 0;
}