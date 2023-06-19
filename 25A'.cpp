#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int arr[n];
	vector <int> odd,even;
	int od=0,evn=0;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		if (arr[i]%2==0)
		{
			evn++; 
			even.push_back(i+1);
		}else{
			od++;
			odd.push_back(i+1);
		}
	}
	if (od==1)
	{
		cout<<odd[0]<<endl;
	}else{
		cout<<even[0]<<endl;
	}


	return 0;
}