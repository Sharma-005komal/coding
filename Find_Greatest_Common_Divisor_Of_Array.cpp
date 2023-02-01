class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = nums[0];
        int y = nums[nums.size()-1];
        if(y%x == 0)
        {
            return x;
        }
        else if(x%y == 0)
        {
            return y;
        }
        int ans;
        for(int i=1; i<x; i++)
        {
            if(x%i == 0 && y%i == 0)
            {
                ans = i;
            }
        }
        return ans;
    }
};
