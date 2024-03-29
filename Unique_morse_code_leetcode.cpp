class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> a = {".-", "-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string, int> m;
        for(int i=0; i<words.size(); i++)
        {
            string s;
            for(int j=0; j<words[i].size(); j++)
            {
                s += a[words[i][j]-'a'];
            }
            m[s] = 1;
        }
        return m.size();
    }
};
