class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0,  right = 0, maxLen = 0;
        int len_s = s.size();
        
        for(int i = 0; i<len_s; i++){
            if(s[i] == '(')
                left++;
            else
                right++;
            
            if(left == right) maxLen = max(maxLen, 2*right);
            else if(right > left) left = right = 0;
        }
        
        left = right = 0;
        
        for(int i = len_s ā 1; i>=0 ; iā){
            if(s[i] == '(')
                left++;
            else
                right++;
            
            if(left == right) maxLen = max(maxLen, 2*left);
            else if(right < left) left = right = 0;
        }
        return maxLen;
    }
};