class Solution {
public:
   
    int countPrimes(int n) {
        int count = 0;
        vector<bool> vis(n, 0);
        for(int i=2; i<n; i++)
        {
            if(vis[i] == true)
            {
                continue;
            }
            count++;
            for(int j=i+i; j<n; j+=i)
            {
                vis[j] = 1;
            }
        }
        return count;
    }
};
