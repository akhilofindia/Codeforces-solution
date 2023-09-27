#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        map<long long ,bool>mp;
        mp[s[0]]=true;
        bool flag=true;
        for(long long i = 1;i < s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                continue;
            }
            if(mp[s[i]]==true){
            	flag=false;
            }
            mp[s[i]]=true;
        }
        if(flag){
        	cout<<"YES"<<endl;
        }
        else{
        	cout<<"NO"<<endl;
        }
    }
    
    return 0;
}