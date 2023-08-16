#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b; cin>>a>>b;
	int cnt=0;
	if (a>=b)
	{
		cout<<a-b<<endl;
	}else{
		while(b>a){
			cnt++;
			if (b%2==0)
			{
				b/=2;
			}else{
				b+=1;
			}
		}
		cout<<cnt+abs(b-a)<<endl;
	}

	return 0;
}