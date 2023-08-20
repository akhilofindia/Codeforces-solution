#include <bits/stdc++.h>
using namespace std;

int main(){
	int f,p,q;
	cin>>f>>p;
	int arr[200];
	for (int i = 0; i < p; i++)
	{
		cin>>arr[i];
	}
	cin>>q;
	int count=0;
	for (int i = p; i < p+q; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+(p+q));
	for (int i = 0; i < p+q; i++)
	{
		if (arr[i]!=arr[i+1])
		{
			count++;
		}
	}
	if (count==f)
	{
		cout<<"I become the guy."<<endl;
	}else{
		cout<<"Oh, my keyboard!"<<endl;
	}


	return 0;
}