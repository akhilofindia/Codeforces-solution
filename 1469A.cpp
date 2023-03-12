#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
     cin>>tc;
     while(tc--)
     {
          string s;
          cin>>s;
          int a = s.size();
          if(a%2==1){
               cout<<"NO"<<endl;
          }else{
               if(s[0]==')'||s[a-1]=='('){
                   cout<<"NO"<<endl;
               }else
                   cout<<"YES"<<endl;     
          }
     }

	return 0;
}