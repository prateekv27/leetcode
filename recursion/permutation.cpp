class Solution {
public:
    void ans(vector<int>& nums, int i ,vector<vector<int>>& arr){
        if(i>=nums.size()){
            arr.push_back(nums);
            return;
        }
        for(int j = i;i<nums.size();i++){
            swap(nums[i] , nums[j]);
            ans(nums,j+1,arr);
            swap(nums[i] , nums[j]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> arr;
        int i = 0;
        ans(nums,i,arr);
        return arr;

        
    }
};
