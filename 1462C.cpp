#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s="";
		int n;cin>>n;
		if (n>=46)
		{
			cout<<-1<<endl;
		}else if (n<10)
		{
			cout<<n<<endl;
		}else{
			int d=9;
			while(n){
				if (n>=d)
				{
					n=n-d;
					s=s+char(d+48);
					d--;
				}
				if (n<d)
				{
					d--;
				}
			}
			sort(s.begin(),s.end());
			cout<<s<<endl;
		}
	}

	return 0;
}