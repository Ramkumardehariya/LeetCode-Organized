class Solution {
    int mod = 1000000007;
public:
    int concatenatedBinary(int n) {
        long long ans = 0;
        for(int i = 1; i<=n; i++){
            int shift = 0;
            int num = i;

            while(num > 0){
                num = num>>1;
                shift++;
            }
            ans = ((ans<<shift)%mod+i)%mod;
        }
        return ans;
    }
};