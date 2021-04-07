class Solution {
public:
    int minOperations(int n) {
        
        int result=0;
        int target=n; // n개의 홀수의 합=n^2, target= n*n/n=n
        
        for (int i=0;i<n/2;i++){
            result+=n-(2*i+1);
        }
        
        return result;
    }
};