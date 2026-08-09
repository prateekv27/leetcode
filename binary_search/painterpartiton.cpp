class Solution {
public:
    int mintime(vector<int>& nums, int k) {
        int start = 0;
        int end = 0;
        int mid; 
        int ans;
        int n = nums.size();
        for(int i =0;i<nums.size();i++){
            start = max(start, nums[i]);
            end+=nums[i];
        }
        while(start<=end){
            mid = (start + end)/2;
            int time = 0;
            int count  =1;
            for(int i =0;i<n;i++){
                time+=nums[i];
                if(time>mid){
                    count++;
                    page = nums[i];
                }
            }
            if(count<=k){
                ans = mid;
                end = mid -1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
        
    }
};