#include <bits/stdc++.h>
using namespace std;

void permute(string &a,int index,int r){
	if (index==r)
	{
		cout<<a<<endl;
	}else{
		for (int i = index;i<r;i++)
		{
			swap(a[index],a[i]);
			permute(a,index+1,r);
			swap(a[index],a[i]);
		}
	}
}

void subseq(int ind,vector <int>&ds,int arr[],int n){
	if (ind==n)
	{		
		for (auto it: ds)
		{
			cout<<it<<" ";
		}
		if (ds.size()==0)
		{
			cout<<"{}";
		}
		cout<<endl;
		return;
	}
	subseq(ind+1,ds,arr,n);

	ds.push_back(arr[ind]);
	subseq(ind+1,ds,arr,n);
	ds.pop_back();
}
int main(){
	string str="NICK";
	int b=str.size();
	permute(str,0,b-1);
	cout<<endl;
	int arr[]={3,2,1};
	int n=3;
	vector <int>ds;
	subseq(0,ds,arr,n);
	return 0;
}