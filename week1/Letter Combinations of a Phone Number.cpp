vector<string> KEYS = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits=="") return ans;
        Combinate("", digits, 0, ans);
        return ans;
    }
    
    void Combinate (string res,string digits,int num, vector<string> &ans) {
        if (num>= digits.length()) {
            ans.push_back(res);
            return;
        }
        int x = digits[num]-'0';
        string s = KEYS[x];
        int s_len=s.length();
        for (int i=0; i<s_len; i++){
            Combinate(res+s[i],digits,num+1,ans);
        }
    }
};
