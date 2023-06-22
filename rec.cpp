#include <bits/stdc++.h>
using namespace std;


void func(int sum,int count,vector <int> &ds,set<vector<int>> &st){
	if (sum==count)
	{
		vector<int>temp;
		for (int i = 0; i < ds.size(); i++)
		{
			cout<<ds[i]<<' ';
		}
		cout<<endl;
		// temp=ds;
		// sort(temp.begin(),temp.end());
		// st.insert(temp);
		return;
	}
	if (sum<count)
	{
		return;
	}
	ds.push_back(24); 
	func(sum,count+24,ds,st);
	ds.pop_back();
	ds.push_back(4); 
	func(sum,count+4,ds,st);
	ds.pop_back();
	ds.push_back(3); 
	func(sum,count+3,ds,st);
	ds.pop_back();
	return;
}

void numb(int sum,int count,int &b,int len,int x,int y)
{
	if (sum==count)
	{
		b=max(b,len);
		return ;	
	}
	if (sum<count)
	{
		return;
	}
	len++;
	numb(sum,count+1,b,len,x,y);
	numb(sum,count+3,b,len,x,y);
	// numb(sum,count+z,b,len,x,y,z);
	len--;
	return;
}	

int main(){
	int sum;
	cin>>sum;
	// int x,y,z; cin>>x>>y>>z;
	int b=INT_MIN;
	int len=0;
	set<vector<int>>st;
	vector <int>ds; 
	// func(sum,0,ds,st);
	numb(sum,0,b,len,1,3);    
	cout<<b<<endl;
	func()
	// for (auto it = st.begin(); it !=st.end(); ++it){
 //       for (int i = 0; i < (*it).size(); i++)
 //       {
 //       	cout<<(*it)[i]<<" ";
 //       }
 //       cout<<endl;
	// }
	return 0;
}