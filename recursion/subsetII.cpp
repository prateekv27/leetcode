class Solution {
public:
    void ans(vector<int>& nums,vector<int>& p ,int start,vector<vector<int>>& arr){
        
        arr.push_back(p);
        

        
        for(int i = start;i<nums.size();i++){
            if(i > start && nums[i]==nums[i-1]){
                continue;
            }
            p.push_back(nums[i]);

            ans(nums, p, i+1, arr);

            p.pop_back();
        }
        
    
       


    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> p;
        vector<vector<int>> arr;
        
        int start = 0;
        ans(nums,p,start,arr);
        return arr;
        

        
    }
};