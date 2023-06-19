#include <bits/stdc++.h>
using namespace std;


void func(int sum,int count,vector <int> &ds,set<vector<int>> &st){
	if (sum==count)
	{
		vector<int>temp;
		temp=ds;
		sort(temp.begin(),temp.end());
		st.insert(temp);
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
void numb(int sum,int count,vector <int> &ds,set<vector<int>> &st,int b){
	int cnt=0; 
	if (sum==count)
	{
		b=max(b,cnt);
		return;
	}
	if (sum<count)
	{
		cnt=0;
		return;
	}
	ds.push_back(24); 
	cnt++;
	func(sum,count+24,ds,st);
	ds.pop_back();
	cnt--;
	ds.push_back(4);
	cnt++; 
	func(sum,count+4,ds,st);
	ds.pop_back();
	cnt--;
	ds.push_back(3); 
	cnt++;
	func(sum,count+3,ds,st);
	ds.pop_back();
	cnt--;
	return;
}

int main(){
	int sum=27;
	int b=0;
	set<vector<int>>st;
	vector <int>ds; 
	numb(sum,0,ds,st,b);      
	cout<<b<<endl;
	// for (auto it = st.begin(); it !=st.end(); ++it){
 //       for (int i = 0; i < (*it).size(); i++)
 //       {
 //       	cout<<(*it)[i]<<" ";
 //       }
 //       cout<<endl;
	// }
	return 0;
}