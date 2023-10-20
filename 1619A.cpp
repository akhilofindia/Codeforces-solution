#include<iostream>
using namespace std;
 
int main(){
	int tc ; cin >>tc;
	while(tc--){
		string s,s1="",s2="";
		cin>>s;
		if(s.size()%2!=0){
			cout <<"NO"<<endl;
		}else{
			for(int i = 0; i < s.size()/2; i++)
			    s1 += s[i];
			for(int i = s.size()/2;i < s.size(); i++)
			    s2 += s[i] ;
			if(s1==s2)
			{
			    cout << "YES"<<endl;
	        }else{
	         	cout << "NO"<<endl;
	        }
	 	}
	}
}