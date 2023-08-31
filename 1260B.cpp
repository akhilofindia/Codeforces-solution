// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int tc;cin>>tc;
// 	while(tc--){
// 		long long n,m;cin>>n>>m;
// 		long long mn=min(m,n);
// 		if ((n+m)/3<=mn && (n+m)%3==0)
// 		{
// 			cout<<"YES"<<endl;
// 		}else{
// 			cout<<"NO"<<endl;
// 		}

// 	}

// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
        string a;cin>>a;
        int flag=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='2'&& a[i+1]=='1'){
                flag=1;
                break;
            }
        }
        int x=stoi(a);
        if(x%21==0) flag=1;
        if(flag==1){
            cout<<"The streak is broken!"<<endl;
        }else{
            cout<<"The streak still lives in our heart!"<<endl;
        }
    }
	return 0;
}