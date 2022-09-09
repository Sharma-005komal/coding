class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(auto i:nums)
        {
            total += i;
        }
        int left = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(left == (total-left-nums[i]))
            {
                return i;
            }
            left = left + nums[i];
        }
        return -1;
    }
};

//in this question, we first calculate total sum of array element as "total".
//then, we take "left" variable in which we store sum of elements which is equal to total after subtraction from left
