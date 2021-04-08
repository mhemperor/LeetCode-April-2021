class Solution {
public:
    bool halvesAreAlike(string s) {
        unitificate(s);
        int len = s.length();
        int cnt=0;
        for (int i=0; i<len; i++){
            char c = s[i];
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') continue;
            if (i<len/2) cnt++;
            else cnt--;
        }

        if (cnt==0) return true;
        return false;
        

    }
    
    void unitificate (string &s){
        int len = s.length();
        for (int i=0; i<len; i++) {
            if (isupper(s[i])) {
                s[i]=tolower(s[i]);
            }
        }
        
    }
};