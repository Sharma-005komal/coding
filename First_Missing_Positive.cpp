class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int m = INT_MIN;
        unordered_map<int, int> mp;
        for(auto it : nums)
        {
            mp[it]++;
            if(it > m)
            {
                m = it;
            }
        }
        for(int i=1; i<= m; i++)
        {
            if(mp.find(i) == mp.end())
            {
                return i;
            }
        }
        if(m <= 0)
        {
            return 1;
        }
        return m+1;
    }
};
