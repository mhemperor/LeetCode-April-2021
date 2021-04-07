class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int v_size = A.size();
        for (int i = 0; i < v_size; i++)
            if (i - A[i] > 1 || i - A[i] < -1) return false;
        return true;
        
    }
};