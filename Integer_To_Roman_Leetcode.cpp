class Solution {
public:
    string intToRoman(int num) {
        string ans;
        vector<string> roman({"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", 
        "CM", "M"});
        vector<int> value({1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000});
        int seq_size = value.size();
        int ind = seq_size -1;
        while(num > 0)
        {
            while(value[ind] <= num)
            {
                ans += roman[ind];
                num = num - value[ind];
            }
            ind--;
        }
        return ans;
    }
};
