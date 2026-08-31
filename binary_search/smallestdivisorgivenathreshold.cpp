class Solution {
public:
    int smallestDivisor(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        int start = 1;
        int end=nums[n-1];
       
        
        int mid;
        int ans;
        while(start<=end){
            mid = start + (end - start)/2;
            long long sum  = 0;
            
            for(int i = 0;i<n;i++){
                sum+=(nums[i]+mid-1)/mid;

                
                
            }
            if(sum<=t){
                ans = mid;
                end = mid -1;
            }
            else{
                start = mid+1;
            }



        }
        return ans;
        
    }
};