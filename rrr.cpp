class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        map<long long, long long> idFreq;
        vector<long long> ans; 
        long long maxFreq = 0;
        for (long long i = 0; i < nums.size(); ++i) {
            long long id = nums[i];
            long long frequency = freq[i];
            idFreq[id] += frequency;
            maxFreq = max(maxFreq, idFreq[id]);
            ans.push_back(maxFreq);
        }   
        return ans;
    }
};