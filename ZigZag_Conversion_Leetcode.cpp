class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        if(numRows == 1)
        {
            return s;
        }
        int step = 2 * numRows - 2;
        for(int i=0; i<numRows; i++)
        {
            for(int j=i; j<s.length(); j+=step)
            {
                ans.push_back(s[j]);
                if(0<i && i<numRows-1 && j+step-2*i<s.length())
                {
                    ans.push_back(s[j+step-2*i]);
                }
            }
        }
        return ans;
    }
};
