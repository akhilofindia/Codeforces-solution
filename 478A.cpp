#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[5];
	int ans=0;
	for (int i = 0; i < 5; i++)
	{
		cin>>arr[i];
		ans+=arr[i];
	}
	if (ans%5==0 && ans/5!=0)
	{
		cout<<ans/5<<endl;
	}else{
		cout<<-1<<endl;
	}


	return 0;
}