#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string a,b;cin>>a>>b;
		long long cnt=0;
		for (long long i = 0; i < b.length(); i++)
		{
			if (b[i]=='a')
			{
				cnt++;
			}
		}
		if (b=="a")
		{
			cout<<1<<endl;
		}else if(cnt>0){
			cout<<-1<<endl;
		}else{
			cout<<(long long)pow(2,a.size())<<endl;
		}
	}

	return 0;
}