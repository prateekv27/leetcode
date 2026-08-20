class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       
        vector<vector<int>>triplet;
        int n = nums.size();
            for(int i = 0;i<n;i++){
                if(i>0 && nums[i]==nums[i-1]){
                    continue;
                }
                int p1 = i+1;
                int p2 = n-1;
                while(p1<p2){
                if(nums[i] + nums[p1]+nums[p2]==0){
                triplet.push_back({nums[i],nums[p1],nums[p2]});
                p1++;
                p2--;
                 while(p1<p2 && nums[p1]==nums[p1-1]){
                    p1++;
                }
                
                }
                else if(nums[i] + nums[p1]+nums[p2]<0){
                    p1++;
                }
                else{
                    p2--;
                }
               
               
                }
            }
            
            
            return triplet;

        }
        
    

};