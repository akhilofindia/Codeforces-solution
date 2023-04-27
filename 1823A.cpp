#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    int tc; 
    cin >> tc; 
    while (tc--) { 
        long long n,k,a; 
        cin >> n >> k; 
        long long count=-1;
        for (int i = 0; i <= n; i++)
        {
        	a=(i*(i-1)/2 + ((n-i)*(n-i-1))/2);
        	if (a==k)
        	{
        		count=i;
        		break;
        	}
        }
        if (count==-1)
        {
        	cout<<"NO"<<endl;
        }else{
        	cout<<"YES"<<endl;
        	for (int i = 0; i < count; i++)
        	{
        		cout<<1<<" ";
        	}
        	for (int i = count; i < n; i++)
        	{
        		cout<<-1<<" ";
        	}
        	cout<<endl;
        }
    } 
	return 0;
}