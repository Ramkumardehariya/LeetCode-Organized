class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        set<int> st;
        
        for(auto num: arr){
            st.insert(num*num);
        }
        
        for(int i = 0; i<arr.size(); i++){
            for(int j = i+1; j<arr.size(); j++){
                int curr = (arr[i]*arr[i]) + (arr[j]*arr[j]);
                
                if(st.find(curr) != st.end()){
                    return true;
                }
            }
        }
        
        return false;
    }
};