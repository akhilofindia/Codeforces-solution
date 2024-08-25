class Solution {
public:
    bool isValidPair(int a, int b) {
        string ok1 = to_string(a);
        string ok2 = to_string(b);
        while (ok1.length() < ok2.length()) {
            ok1 = "0" + ok1;
        }
        while (ok2.length() < ok1.length()) {
            ok2 = "0" + ok2;
        }

        int diff_count = 0;
        int first_diff = -1;
        int second_diff = -1;
        for (int i = 0; i < ok1.length(); i++) {
            if (ok1[i]!=ok2[i]) {
                diff_count++;
                if (diff_count == 1) {
                    first_diff = i;
                } else if (diff_count == 2) {
                    second_diff=i;
                } else {
                    return false;  
                }
            }
        }
        if (diff_count==2) {
            swap(ok1[first_diff], ok1[second_diff]);
            return ok1 == ok2;
        }

        return false;
    }

    int countPairs(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j] || isValidPair(nums[i], nums[j])) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
