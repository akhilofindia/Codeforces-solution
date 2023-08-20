#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int m,k,a1,a;
		cin>>m>>k>>a1>>a;
		int ans1=m/k;
		int ans2=m%k;
		int num1=max(0,ans2-a1);           //max with 0 hr jgh qki agr fancy coin ni lge to negative m hoga,0answer
		int left=max(0,a1-ans2);           
		int num2=max(0,ans1-a);
		int final=min(left/k,num2);       //kitne already wle coins use hoge
		int ans=num1+num2-final;
		cout<<ans<<endl;
		//clear nhi sochpaye contest ke time aur thora clear treeka nhi sujha,km logo se bna to lga kch algo use hoga shyd
		//to basic implementation me jhijhak rha,thora editorial se clear hua
	}

	return 0;
}