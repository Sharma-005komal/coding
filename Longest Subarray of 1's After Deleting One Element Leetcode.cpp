class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int> dp;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                dp.push_back(i);
            }
        }
        if(dp.size() == 0)
        {
            return nums.size()-1;
        }
       
        int ans = INT_MIN;

        for(int i=0; i<dp.size(); i++)
        {
            int count = 0;
            int j=dp[i]-1;
            while(j >= 0 && nums[j] == 1)
            {
                count++;
                j--;
            }
            int k=dp[i]+1;
            while(k < nums.size() && nums[k] == 1)
            {
                count++;
                k++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
