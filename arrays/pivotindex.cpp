class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tsum = 0;
        int prefix = 0;
        
        for(int i = 0;i<nums.size();i++){
            tsum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
             if(tsum-prefix-nums[i]==prefix){
                return i;
            }
            prefix+= nums[i];
            

        }
        return -1;

        
    }
};