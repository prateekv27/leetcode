class Solution {
public:
    void ans(vector<int>& nums,vector<int>& p,int i,vector<vector<int>>& arr){
        if(i>=nums.size()){
            arr.push_back(p);
            return;
        }

        ans(nums,p,i+1,arr);

        int j = nums[i];
        p.push_back(j);
        ans(nums,p,i+1,arr);
        p.pop_back();





    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> arr;
        vector<int>p;
        int i = 0;
        ans(nums,p,i,arr);
        return arr;


        
    }
};