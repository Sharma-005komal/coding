//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    int i=0, j=n-1;
    while(i < j)
    {
        if(arr[i] != x)
        {
            i++;
        }
        if(arr[j] != x)
        {
            j--;
        }
        if(arr[i] == x && arr[j] == x)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    if(arr[i] == x && arr[j] == x && i == j)
    {
        return {i, j};
    }
    if(ans.size() == 1)
    {
        return {-1, -1};
    }
    return {-1, -1};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
