class Solution {
public:
    vector<long long> countOfPairs(long long n, long long x, long long y) {
        vector<long long>final;
        map<long long,long long>mp;
        for(long long i=1;i<=n;i++){
            for(long long j=i+1;j<=n;j++){
                long long dist=min({abs(i-j),abs(i-x)+abs(y-j)+1,abs(i-y)+abs(x-j)+1});
                mp[dist]++;
            }
        }
        for (long long i = 1; i <= n; i++)
        {
            final.push_back(2*mp[i]);
        }   
        return final;
    }
};