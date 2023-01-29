#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    vector<int> ans;
    sort(arr.begin(), arr.end());
    int i=0, j=0, count = 0;
    while(i != n)
    {
        if(arr[i] == arr[j])
        {
            count++;
            j++;
        }
        else
        {
            if(count > n/3)
            {
                ans.push_back(arr[i]);
            }
            count = 0;
            i = j;
        }
    }
    return ans;
}
