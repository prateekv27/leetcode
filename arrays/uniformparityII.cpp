class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int>nums2;
        sort(nums1.begin() , nums1.end());
        int a = nums1[0];
        if(a%2==1){
            return true;

        }
        for(int i = 0;i<n;i++){
            if(nums1[i]%2==0){
                nums2.push_back(nums1[i]);
                
                }

            }
        if (nums2.size()==n){
            return true;
        }
        else{
            return false;
        }
            



        
        return true;
       
        
    }
};

      