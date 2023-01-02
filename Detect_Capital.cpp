class Solution {
public:
    bool detectCapitalUse(string word) {
        int count_small = 0, count_large = 0;
        int flag = 0;
        int n = word.length();
        if(word[0] >= 'A' && word[0] <= 'Z')
        {
            flag = 1;
        }
        for(int i=0; i<n; i++)
        {
            if(word[i] >= 'a' && word[i] <= 'z')
            {
                count_small++;
            }
            else if(word[i] >= 'A' && word[i] <= 'Z')
            {
                count_large++;
            }
        }
        if(count_small == n)
        {
            return true;
        }
        if(count_large == n)
        {
            return true;
        }
        if(count_large == 1 && flag == 1 && count_small == n-1)
        {
            return true;
        }
        return false;
    }
};
