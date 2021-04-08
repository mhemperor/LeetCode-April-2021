vector<string> KEYS = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans = Combination(digits, digits.length());
        return ans;
    }
    
    vector<string> Combination (string digits,int num) {
        vector<string> ret;
        if(digits=="") return ret;
        queue<string> q;
        q.push("");
        while (!q.empty()){
            string s= q.front();
            q.pop();
            
            int len = s.length();            
            if (len>=num) {
                ret.push_back(s); continue;
            }
            for (auto letter :KEYS[(int)(digits[len]-'0')]){
                q.push(s+letter);
            }
        }
        
        return ret;
    }
};
