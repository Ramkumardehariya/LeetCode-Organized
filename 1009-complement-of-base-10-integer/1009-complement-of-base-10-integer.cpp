class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 0;
        int num = n;

        while(num){
            mask = mask<<1 | 1;
            num = num >> 1;
        }
        
        return (~n)&mask;
    }
};