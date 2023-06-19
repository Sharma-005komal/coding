class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = max(gain[0], 0);
        int x = gain[0];
        for(int i=1; i<gain.size(); i++)
        {
            int sum = gain[i] + x;
            ans = max(ans, sum);
            x = sum;
        }
        return ans;
    }
};
