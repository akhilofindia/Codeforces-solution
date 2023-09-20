#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    string x,y,z;
    x= to_string(a);
    y= to_string(b);
    z= to_string(c);
    string g,h,j;
    for (int i = 0; i < z.size(); ++i) {
        if(i<x.size()){
            if(x[i]!='0'){
                g.push_back(x[i]);
            }
        }
        if(i<y.size()){
            if(y[i]!='0')
                h.push_back(y[i]);
        }
        if(z[i]!='0'){
            j.push_back(z[i]);
        }
    }
    a=stoi(g),b= stoi(h),c= stoi(j);
    if (a+b==c)
    {
    	cout<<"YES"<<endl;
    }else{
    	cout<<"NO"<<endl;
    }

	return 0;
}