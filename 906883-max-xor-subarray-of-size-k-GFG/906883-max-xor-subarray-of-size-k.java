class Solution {
    public int maxSubarrayXOR(int[] arr, int k) {

        int i=0,j=0,res=0,max=Integer.MIN_VALUE;
        while(i<arr.length){
            res=res^arr[i];
            if((i - j + 1) == k){
                max=Math.max(max,res);
                res=res^arr[j];
                j++;
            }
            i++;
        }
        return max;
    }
}
