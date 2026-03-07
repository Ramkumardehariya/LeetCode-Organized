class Solution {
  public:
    int noOfWays(int m, int n, int x) {
        
        int t = x;
        int d = n;
        int f= m;
        vector<int> prev(t+1 , 0);
        vector<int> curr(t+1 , 0);
        
        prev[0] = 1;
        
        for(int dices = 1; dices<=d; dices++){
            for(int target = 1; target<=t; target++){
                int ans = 0;
                for(int i = 1; i<=f; i++){
                    if(target-i >= 0){
                        ans = ans + prev[target-i];
                    }
                    curr[target] = ans;
                }
                
            }
            prev = curr;
        }
        return prev[t];
    
    }
};