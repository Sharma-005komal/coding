#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
  // Write your code here
   int len = 0;
    for(int i=0; i<arr.size(); i++)
    {
        int sum = arr[i];
        if(sum == 0)
        {
            int x = 1;
            len = max(len, x);
        }
        for(int j=i+1; j<arr.size(); j++)
        {
            sum += arr[j];
            if(sum == 0)
            {
                int x = j-i+1;
                len = max(len, x);
            }
        }
    }
    return len;
}
