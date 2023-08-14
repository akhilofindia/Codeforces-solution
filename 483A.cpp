#include <bits/stdc++.h>
using namespace std;

int main(){
	int l,r;cin>>l>>r;
	if (r-l<2)
	{
		cout<<-1<<endl;
	}else{
		if (l%2)
		{
			if (r-l==2)
			{
				cout<<-1<<endl;
			}else{
				cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
			}
		}else{
			cout<<l<<" "<<l+1<<" "<<l+2<<endl;
		}
	}

	return 0;
}